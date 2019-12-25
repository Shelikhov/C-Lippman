#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <set>

class Message;

class Folder{
	public:
		friend class Message;
		void add_mes(Message &mes){
			mes_ptr = std::make_shared<Message> (mes);
		}
	private:
		std::shared_ptr<Message> mes_ptr;
};
class Message{
	public:
		Message(const std::string &str): text(str){
		}
		Message(Message &origin): text(origin.text){
		}
		void save(Folder &fol){
			fol_ptr = std::make_shared<Folder> (fol);
			fol.add_mes(*this);
			return;
		}
	private:
		std::shared_ptr<Folder> fol_ptr;
		std::string text;
};

