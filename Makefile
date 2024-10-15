main: Customer.cpp Customer.h EndScene.cpp EndScene.h Game.cpp Game.h Medicine.cpp Medicine.h Patient.h Patient.cpp Person.cpp Person.h Player.cpp Player.h Police.cpp Police.h Storage.cpp Storage.h Visitor.h main.cpp
	clang++ Customer.cpp EndScene.cpp Game.cpp Medicine.cpp Patient.cpp Person.cpp Player.cpp Police.cpp Storage.cpp Visitor.cpp main.cpp -o Backyard_Pharmacy
	./Backyard_Pharmacy

end: EndScene.cpp EndSceneTest.cpp EndScene.h EndSceneTest.h 
	clang++ EndScene.cpp EndSceneTest.cpp -o endSceneTest

player: Player.cpp PlayerTest.cpp Player.h PlayerTest.h 
	clang++ Player.cpp PlayerTest.cpp -o playerTest