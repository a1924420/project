main: Customer.cpp Customer.h EndScene.cpp EndScene.h Game.cpp Game.h Medicine.cpp Medicine.h Patient.h Patient.cpp Person.cpp Person.h Player.cpp Player.h Police.cpp Police.h Storage.cpp Storage.h Visitor.h main.cpp
	clang++ Customer.cpp EndScene.cpp Game.cpp Medicine.cpp Patient.cpp Person.cpp Player.cpp Police.cpp Storage.cpp Visitor.cpp main.cpp -o main

endScene: EndScene.cpp EndSceneTest.cpp
	clang++ EndScene.cpp EndSceneTest.cpp -o endSceneTest