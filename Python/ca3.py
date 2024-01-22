def add(contact, name, phone):
    if name not in contact:
        contact[name] = phone
        print("Contact added successfully.\n\n")
    else:
        print("Contact is already in the dictionary.\n\n")

def search(contact, name):
    if name in contact:
        print("Contact is there in the dictionary.\n\n")
    else:
        print("Contact is not there in the dictionary.\n\n")

def update(contact, name, new):
    if name in contact:
        contact[name] = new
        print("Contact updated successfully.\n\n")
    else:
        print("Contact is not there in the dictionary.\n\n")

def delete(contact, name):
    if name in contact:
        del contact[name]
        print("Contact deleted successfully.\n\n")
    else:
        print("Contact is not there in the dictionary.\n\n")

contact = {}
    
while True:
        print("Press 1 for adding a contact.")
        print("Press 2 for searching a contact.")
        print("Press 3 for updating a contact.")
        print("Press 4 for deleating a contact.")
        print("Press 5 for printing the contact.")
        print("Press 6 for exiting.\n")
        
        n = int(input("Enter the number according to your preference: "))
        
        if(n == 1):
            name = input("Enter contact name: ")
            phone = input("Enter contact phone number: ")
            add(contact, name, phone)
        elif(n == 2):
            name = input("Enter contact name to search: ")
            search(contact, name)
        elif(n == 3):
            name = input("Enter contact name to update: ")
            new = input("Enter new phone number: ")
            update(contact, name, new)
        elif(n == 4):
            name = input("Enter contact name to delete: ")
            delete(contact, name)
        elif(n == 5):
            print(contact,"\n\n")
        elif(n == 6):
            print("Exiting...")
            break
        else:
            print("Invalid number.")