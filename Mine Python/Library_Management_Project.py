booklist = ["Harry Potter 1", "Harry Potter 2", "Harry Potter 3", "Harry Potter 4", "Harry Potter 5", "Harry Potter 6", "Harry Potter 7-1", "Harry Potter 7-2",
            "Meluha", "Let Us C"]
secret_key = "20BCP023"


class library:

    def __init__(self, list_of_books, library_name):
        self.lend_data = {}
        self.list_of_books = booklist
        self.library_name = library_name

        # initialize reader data
        for books in self.list_of_books:
            # first initialize iwt with none
            self.lend_data[books] = None

# Available Books list
    def displaybook(self):
        for i in booklist:
            print(i)

    def lendboks(self, book, reader):
        if (book in booklist):
            if self.lend_data[book] == None:
                self.lend_data[book] = reader
                print("Take it. Thank you for coming. Have a Nice day")
            elif self.lend_data[book] is not None:
                print(f"Soory Book is handed over {self.lend_data[book]} ")
                no_book_there = input("Do you want to lend any other book: Y or N ")
                if no_book_there == "Y":
                    book = input("Which Book do you want to lend : ")
                    while self.lend_data[book] == None:
                        if (book in booklist):
                            print("Take it. Thank you for coming. Have a Nice day")
        
                            break
                        else:
                            print("Book is not in list")
                elif no_book_there == "N":
                    print("Ok Thanks for coming Bye")
        elif book not in booklist:
            print("You Written wrong book name")

    def returnbook(self, book, reader):
        if self.lend_data[book] != None:
            self.lend_data.pop(book)
            self.lend_data[book] = None
        elif self.lend_data[book] is None:
            print("This book is not lended to anyone")
        else:
            print("We don't have this type of book")

    def addbook(self, book_name):
        self.list_of_books.append(book_name)
        self.lend_data[book_name] = None  # means not given anyone

    def deletebook(self, book_name):
        self.list_of_books.remove(book_name)


if __name__ == "__main__":

    library_name = "BT"
    BT = library(booklist, library_name)
    a = 1
    while(a == 1):
        username = input("Enter your name : ")
        print(f"Hey {username}. Welcome to {library_name}")
        print("Enter 1 for Display available book list")
        print("Enter 2 for lend book")
        print("Enter 3 for add new book")
        print("Enter 4 for return book")
        print("Enter 5 for Delete book")
        print("Enter 6 for Quit")
        choise = int(input())

    # Display Book list
        if choise == 1:
            BT.displaybook()

        elif choise == 2:
            for i in booklist:
                print(i)
            lendbook = input("Which Book do you want to lend : ")
            BT.lendboks(lendbook, username)

        elif choise == 3:
            addbook = input("Welcome. Which book do you want to add : ")
            BT.addbook(addbook)

        elif choise == 4:
            returnbook = input("Which book do you want to return : ")
            BT.returnbook(returnbook, username)

        elif choise == 5:
            delete_key = input("Enter secret key for delete book : ")
            if secret_key == delete_key:
                del_book = input("Which book do you want to delete")
                BT.deletebook(del_book)
            else:
                print("You have Entered wrong key")

        elif choise == 6:
            break



# # For lending Book
#     if choise == 2:
#         for i in booklist:
#             print(i)
#         lendbook = input("Which Book do you want to lend : ")
#         if (lendbook in booklist):
#             print("Take it. Thank you for coming. Have a Nice day")
#             booklist.remove(lendbook)
#         else :
#             print("Soory Book is not available")
#             lendbook = input("Which another Book do you want to lend : ")
#             print("Take it. Thank you for coming. Have a Nice day")
#             booklist.remove(lendbook)

# # For add new book
#     if choise == 3:
#         addbook = input("Welcome. Which book do you want to add : ")
#         booklist.append(addbook)

# # Fr return book
#     if choise == 4:
#         returnbook = input("Which book do you want to return : ")
#         booklist.append(returnbook)
