#include "Queue.h"

int main() {
    // Create a queue
    Queue customerQueue;

    // Create three accounts
    Account a1("John Worker", 960);
    Account a2("Black Bar", 1200);
    Account a3("Barak", -200);

    // Add accounts to the queue
    cout << "Adding accounts to the queue..." << endl;
    customerQueue.addNewAccount(a1);
    customerQueue.addNewAccount(a2);
    customerQueue.addNewAccount(a3);

    // Print the current queue
    cout << customerQueue;

    // Remove an account from the queue
    cout << "Removing the first account from the queue..." << endl;
    Account removedAccount = customerQueue.getAccount();
    cout << "Removed account: " << removedAccount << endl;

    // Check if the queue is empty
    cout << "Is the queue empty? " << (customerQueue.isEmpty() ? "Yes" : "No") << endl;

    // Peek at the next account in the queue
    cout << "Peeking at the next account in the queue..." << endl;
    Account& nextAccount = customerQueue.topAccount();
    cout << "Next account: " << nextAccount << endl;

    // Print the queue again to ensure it hasn't changed
    cout << "Queue after removing one account:" << endl;
    cout << customerQueue << endl;

    return 0;
}
