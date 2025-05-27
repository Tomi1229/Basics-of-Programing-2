-- T�bl�k �jral�trehoz�sa
DROP TABLE IF EXISTS Nodes;
DROP TABLE IF EXISTS Edges;
CREATE TABLE Nodes (
    id TEXT PRIMARY KEY,
    type TEXT NOT NULL,
    attribute1 REAL,
    attribute2 REAL,
    attribute3 REAL,
    attribute4 TEXT
);
CREATE TABLE Edges (
    from_id TEXT,
    to_id TEXT,
    length REAL,
    voltage REAL,
    resistance REAL,
    reactance REAL,
    FOREIGN KEY(from_id) REFERENCES Nodes(id),
    FOREIGN KEY(to_id) REFERENCES Nodes(id)
);
INSERT INTO Nodes
VALUES (
        'PaksiErőmű',
        'PowerPlant',
        2000.0,
        400.0,
        0,
        'NUCLEAR'
    );
INSERT INTO Nodes
VALUES (
        'Transzformátor',
        'TransformerStation',
        400.0,
        132.0
    );
INSERT INTO Nodes
VALUES (
        'Budapest',
        'UserEndpoint',
        500.0,
        30.0,
        10.0,
        'CITY'
    );
INSERT INTO Nodes
VALUES (
        'Győr',
        'UserEndpoint',
        200.0,
        10.0,
        5.0,
        'CITY'
    );
INSERT INTO Nodes
VALUES (
        'Szeged',
        'UserEndpoint',
        300.0,
        15.0,
        8.0,
        'CITY'
    );
INSERT INTO Edges
VALUES (
        'PaksiErőmű',
        'Transzformátor1',
        35.0,
        400.0,
        0.4,
        0.2
    );
INSERT INTO Edges
VALUES (
        'Transzformátor1',
        'Budapest',
        60.0,
        132.0,
        0.6,
        0.25
    );
INSERT INTO Edges
VALUES (
        'Transzformátor1',
        'Győr',
        100.0,
        132.0,
        1.2,
        0.5
    );
INSERT INTO Edges
VALUES (
        'Transzformátor1',
        'Szeged',
        140.0,
        132.0,
        1.5,
        0.6
    );