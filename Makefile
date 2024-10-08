endScene: EndScene.cpp EndScene.h EndSceneTest.cpp EndSceneTest.h
	clang++ EndSceneTest.cpp EndScene.cpp  -o end_test

person: Person.cpp Person.h PersonTest.cpp
	g++ Person.cpp PersonTest.cpp -o person_test

player: Player.cpp Player.h PlayerTest.cpp PlayerTest.h
	clang++ Player.cpp PlayerTest.cpp -o player_test

main: Person.cpp Person.h Player.cpp Player.h mainTest2.cpp
	clang++ Person.cpp Player.cpp EndScene.cpp mainTest2.cpp -o main