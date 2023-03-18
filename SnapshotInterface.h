//
// Created by Brandon Hargitay on 3/17/23.
//

class SnapshotInterface {
public:
    virtual Snapshot getSnapshot() = 0;
    virtual void applySnapshot(const Snapshot& snapshot) = 0;
};