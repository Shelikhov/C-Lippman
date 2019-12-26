#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

class Folder;

class Message{
	public:
		friend class Folder;
		Message(const std::string &str): text(str){
		}
		Message(Message &origin): text(origin.text){
		}
		std::size_t count(){//To return count of pointers to folders.
			return fol_ptr.size();
		}
		void del_all(){//To delete this message everywhere.
			delete this;
			return;
		}
                void add_fol(Folder &fol){//To add pointer to folder where this message will exist.
                        fol_ptr.insert(&fol);
                }
                void remove_fol(Folder &fol){//To remove pointer to folder where we are removing message.
                        fol_ptr.erase(&fol);
                        return;
                }
	private:
		std::set<Folder*> fol_ptr;//Set of pointers to folders
		std::string text;//Content of message.
};

class Folder{
        public:
                friend class Message;
                void show_all_mes(){//To output all messages in this folder.
                	for_each(mes_ptr.begin(), mes_ptr.end(), [](Message *mes){
				std::cout << mes->text << std::endl;});
			return;
                }
		void show_mes(Message &mes){//To output certain message.
			std::cout << mes.text << std::endl;
			return;
		}
		void save(Message &mes){//To save message in this folder
			mes_ptr.insert(&mes);
			mes.add_fol(*this);
			return;
		}
//The function remove isn't completed.
		void remove(Message &mes){//To remove message from this folder.
			std::cout << mes_ptr.erase(&mes) << std::endl;
			if(mes.count() == 1){
				mes.del_all();
			}else{
				mes.remove_fol(*this);
			}
			return;
		}
        private:
                std::set<Message*> mes_ptr;//Set of pointers to messages.
};
