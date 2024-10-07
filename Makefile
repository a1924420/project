endScene: EndScene.cpp EndScene.h EndSceneTest.cpp EndSceneTest.h
	clang++ EndSceneTest.cpp EndScene.cpp  -o end_test

person: Person.cpp Person.h PersonTest.cpp
	g++ Person.cpp Person_test.cpp -o person_test

player: Player.cpp Player.h PlayerTest.cpp
	g++ Player.cpp Player_test.cpp -o player_test