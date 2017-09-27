#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include "NickGenerator.h"
#include <string>
using namespace menma;
int main()
{
    using namespace nana;

    //Define a form.
    form fm;
    
    NickGenerator nick;//create generation object
    std::string nickname="noname";//nickname
    int length=3;//length of name, default value is 3

    //Define a label and display a text.
    label lab{fm, "<bold black size=16>Random Nick Generator</>"};
    lab.format(true);
    
    
    //Define a label and display a text.
    label nick_lab{fm, "<bold blue size=14>noname</>"};
    nick_lab.format(true);
    
    //Define a label and display a text.
    label length_label{fm, "<bold blue size=14>3</>"};
    length_label.format(true);

    //Define a button and answer the click event.
    button btn{fm, "Quit"};
    btn.events().click([&fm]{
        fm.close();
    });
    
    button button_gen{fm,"Generate"};
    button_gen.events().click([&fm,&nick,&nickname,&nick_lab,&length]{
        nickname=nick.getNick(length);
	nick_lab.caption("<bold blue size=14>"+nickname+"</>");
    });
    
    //capture used variable
    button button_up{fm,"up"};
    button_up.events().click([&fm,&length,&length_label]{
        if(length<=10)
            length++;
	length_label.caption("<bold blue size=14>"+std::to_string(length)+"</>");
    });
    
     //capture used variable
    button button_down{fm,"down"};
    button_down.events().click([&fm,&length,&length_label]{
        if(length>1)
            length--;
	length_label.caption("<bold blue size=14>"+std::to_string(length)+"</>");
    });

    //Layout management
    fm.div("vert <text2><<><weight=80% text><>><<><text_length><>><weight=24<up><gen><down>><<><button><>>");
    fm["text2"]<<lab;
    fm["button"] << btn;
    fm["gen"]<<button_gen;//add button
    fm["up"]<<button_up;//add button
    fm["down"]<< button_down;// add button down
    fm["text"]<< nick_lab;// add label
    fm["text_length"]<<length_label;//size of words
    fm.collocate();
	
    //Show the form
    fm.show();

    //Start to event loop process, it blocks until the form is closed.
    exec();
}