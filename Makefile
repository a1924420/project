game_test: Customer.cpp Customer.h EndScene.cpp EndScene.h Game.cpp Game.h Medicine.cpp Medicine.h Patient.cpp Patient.h Person.cpp Person.h Player.cpp Player.h Police.cpp Police.h Storage.cpp Storage.h Visitor.h 
	g++ Customer.cpp EndScene.cpp Game.cpp Medicine.cpp Patient.cpp Person.cpp Player.cpp Police.cpp Storage.cpp game_test.cpp -o game_test

<<<<<<< HEAD
main: Customer.cpp Customer.h EndScene.cpp EndScene.h Game.cpp Game.h Medicine.cpp Medicine.h Person.cpp Person.h Player.cpp Player.h Police.cpp Police.h Storage.cpp Storage.h Visitor.h main.cpp
	clang++ Game.cpp Person.cpp Player.cpp main.cpp -o main
=======
main: Customer.cpp Customer.h EndScene.cpp EndScene.h Game.cpp Game.h Medicine.cpp Medicine.h Patient.h Patient.cpp Person.cpp Person.h Player.cpp Player.h Police.cpp Police.h Storage.cpp Storage.h Visitor.h 
	clang++ Customer.cpp EndScene.cpp Game.cpp Medicine.cpp Patient.cpp Person.cpp Player.cpp Police.cpp Storage.cpp main.cpp -o main
>>>>>>> 706ac23 (Patient added to compiler)
