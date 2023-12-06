#include "pch.h"
#include "../test/Person.cpp"
#include"../test/Visitor.cpp"
#include"../test/Hotel.cpp"
#include"../test/Room.cpp"
#include"../test/Cooker.cpp"
#include"../test/Play_room.cpp"
#include"../test/Hotel_room.cpp"
#include"../test/Maid.cpp"
#include"../test/Administrator.cpp"
#include"../test/Cafe.cpp"

TEST(TestPerson, TestFuncPerson) {
	Person per("sad", "sasd", true, false, "425");
	EXPECT_EQ(per.first_name_, "sasd");
	EXPECT_EQ(per.reset_place("420"), true);
	EXPECT_EQ(per.say_name(),"sad sasd");
  EXPECT_TRUE(true);
}
TEST(TestVisitor, TestFuncVisitor) {
	Visitor vis("sad", "sasd", true, false, "425");
	EXPECT_EQ(vis.room_number_, 0);
	vis.order_room(420);
	EXPECT_EQ(vis.room_number_, 420);
	vis.move_out();
	EXPECT_EQ(vis.room_number_, 0);
	EXPECT_TRUE(true);
}
TEST(TestMaid, TestFuncMaid) {
	Visitor vis("sad", "sasd", true, false, "425");
	Room room(true, 4);
	Maid maid("maid", "mad", false,false,"cafe","leader_maid");
	EXPECT_EQ(maid.rang_, "leader_maid");
	EXPECT_EQ(maid.clean_clothes(vis), false);
	EXPECT_EQ(maid.clean_room(room),true );
	EXPECT_TRUE(true);
}
TEST(TestCookerCafe, TestFuncCookerCafe) {
	Visitor vis("sad", "sasd", true, false, "425");
	vector<string> menu = {"sausage","potato"};
	Cafe cafe(true, 4,menu,6 );
	Cooker cooker("maid", "mad", false, false, "cafe", "leader_maid",cafe);
	EXPECT_EQ(cooker.rang_, "leader_maid");
	EXPECT_EQ(cooker.add_menu("tomato"),true);
	EXPECT_EQ(cooker.cooking("potato"), true);
	EXPECT_EQ(cooker.cooking("sasd"), false);
	EXPECT_EQ(cooker.delete_menu("tomato"), true);
	EXPECT_EQ(cooker.work_.get_menu(), menu);
	EXPECT_EQ(cooker.work_.add_tables(3), 9);
	EXPECT_TRUE(true);
}
TEST(TestPlayroom, TestFuncPlayRoom) {
	vector<string> games = { "tic-tac-toe","poker" };
	Play_room playroom(true, 4,games);
	EXPECT_EQ(playroom.play_game("poker"), true);
	EXPECT_EQ(playroom.add_game("dota2"), true);
	EXPECT_EQ(playroom.delete_game("sasdasf"), false);
	EXPECT_EQ(playroom.delete_game("dota2"), true);
	EXPECT_TRUE(true);
}
TEST(TestAdministrator, TestFuncAdministrator) {
	Room room(true, 4);
	vector<string> games = { "tic-tac-toe","poker" };
	Play_room playroom(true, 4, games);
	vector<string> menu = { "sausage","potato" };
	Cafe cafe(true, 4, menu, 6);
	Cooker cooker("maid", "mad", false, false, "cafe", "leader_maid", cafe);
	Maid maid("maid", "mad", false, false, "cafe", "leader_maid");
	//сверху подготовка
	Visitor vis("sad", "sasd", true, false, "425");
	Hotel_room hotel_room1(false, 1, 425, 2), hotel_room2(true, 2, 426, 1);
	vector<Hotel_room>hotel_rooms = { hotel_room1,hotel_room2 };
	vector<Person*> personals = { &cooker,&maid };
	vector <Room*> rooms = {&room, & playroom, & cafe, & hotel_room1, & hotel_room2};
	Hotel hotel(rooms.size(), "blu", hotel_rooms, rooms, personals);
	Administrator admin("adamin", "ada", true, false,"hall","leader",hotel);
	Person *ad = &admin;
	EXPECT_EQ(hotel.get_list_of_personal(), personals);
	EXPECT_EQ(hotel.add_personal(*ad),true);
	EXPECT_EQ(admin.invite(vis, 425), true);
	EXPECT_EQ(admin.remove(vis, 426), false);
	EXPECT_EQ(admin.remove(vis, 425), true);
	EXPECT_TRUE(true);
}
