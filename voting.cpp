#include <iostream>
#include <map>
#include <string>

using namespace std;

class VotingSystem {
private:
    map<string, int> candidates;

public:
    // Add a candidate to the system
    void addCandidate(string name) {
        candidates[name] = 0;
    }

    // Vote for a candidate
    void vote(string name) {
        if (candidates.find(name) != candidates.end()) {
            candidates[name]++;
            cout << "Vote for " << name << " recorded successfully." << endl;
        } else {
            cout << "Candidate " << name << " not found." << endl;
        }
    }

    // Display the results
    void displayResults() {
        cout << "Election Results:" << endl;
        for (const auto& candidate : candidates) {
            cout << candidate.first << ": " << candidate.second << " votes" << endl;
        }
    }
};

int main() {
    VotingSystem votingSystem;

    // Adding candidates
    votingSystem.addCandidate("Candidate A");
    votingSystem.addCandidate("Candidate B");
    votingSystem.addCandidate("Candidate C");

    // Voting
    votingSystem.vote("Candidate A");
    votingSystem.vote("Candidate A");
    votingSystem.vote("Candidate B");
    votingSystem.vote("Candidate C");
    votingSystem.vote("Candidate A");

    // Displaying results
    votingSystem.displayResults();

    return 0;
}
