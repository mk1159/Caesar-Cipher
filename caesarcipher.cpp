
#include <iostream> 
#include <string> 
#include <sstream>
using namespace std;

int main(int argc, const char * argv[])
{
   string key; //how much to shift by, num only, between -26 to 26
   int num; //key turned into an int
   string str; //stores the text to be encrypted

   getline(cin, key);
   if ((istringstream(key) >> num) && (num <= 26 && num >= -26) )
   {
      if(num < 0)
      {
         num += 26;
      }
   }
   else
   {
      cout<<"Bad key." << endl;
      return 1;
   }

   while(getline(cin, str))
   {
      for (int i = 0; i < str.length(); i++)
      {
         if(isalpha(str[i]))
         {
            str[i] = tolower(str[i]);
            if (str[i] + num > 'z')
            {
               str[i] = (str[i]) + num - 26;
            }
            else if (str[i] + num < 'a')
            {
               str[i] = (str[i]) + num + 26;
            }
            else
            {
               str[i] = (str[i]) + num;
            }
         }
      }
      cout << str << endl;
   }
   cout << str << endl;
}


/*******************************************OUTPUT*************************************************
 
//IHaveADream.txt

q aig bw gwc bwlig, ug nzqmvla, aw mdmv bpwcop em nikm bpm lqnnqkctbqma wn bwlig ivl bwuwzzwe, q abqtt
pidm i lzmiu. qb qa i lzmiu lmmxtg zwwbml qv bpm iumzqkiv lzmiu.
q pidm i lzmiu bpib wvm lig bpqa vibqwv eqtt zqam cx ivl tqdm wcb bpm bzcm umivqvo wn qba kzmml: "em 
pwtl bpmam bzcbpa bw jm amtn-mdqlmvb: bpib itt umv izm kzmibml mycit."
q pidm i lzmiu bpib wvm lig wv bpm zml pqtta wn omwzoqi bpm awva wn nwzumz atidma ivl bpm awva wn nwzu
mz atidm wevmza eqtt jm ijtm bw aqb lwev bwombpmz ib bpm bijtm wn jzwbpmzpwwl.
q pidm i lzmiu bpib wvm lig mdmv bpm abibm wn uqaaqaaqxxq, i abibm aemtbmzqvo eqbp bpm pmib wn qvrcabq
km, aemtbmzqvo eqbp bpm pmib wn wxxzmaaqwv, eqtt jm bzivanwzuml qvbw iv wiaqa wn nzmmlwu ivl rcabqkm.
q pidm i lzmiu bpib ug nwcz tqbbtm kpqtlzmv eqtt wvm lig tqdm qv i vibqwv epmzm bpmg eqtt vwb jm rclom
l jg bpm kwtwz wn bpmqz asqv jcb jg bpm kwvbmvb wn bpmqz kpizikbmz.
q pidm i lzmiu bwlig.
q pidm i lzmiu bpib wvm lig, lwev qv itijiui, eqbp qba dqkqwca zikqaba, eqbp qba owdmzvwz pidqvo pqa 
tqxa lzqxxqvo eqbp bpm ewzla wn qvbmzxwaqbqwv ivl vcttqnqkibqwv; wvm lig zqopb bpmzm qv itijiui, tqbbt
m jtiks jwga ivl jtiks oqzta eqtt jm ijtm bw rwqv pivla eqbp tqbbtm epqbm jwga ivl epqbm oqzta ia aqa
bmza ivl jzwbpmza.
q pidm i lzmiu bwlig.
 
//BadKey1.txt
Bad key.
 
//BadKey2.txt
Bad key.

//GettysburgAddress_Reverse.txt
four score and seven years ago our fathers brought forth on this continent,
a new nation, conceived in liberty, and dedicated to the proposition that all
men are created equal.

now we are engaged in a great civil war, testing whether that nation, or any
nation so conceived and so dedicated, can long endure. we are met on a great
battle-field of that war. we have come to dedicate a portion of that field, as
a final resting place for those who here gave their lives that that nation
might live. it is altogether fitting and proper that we should do this.

but, in a larger sense, we can not dedicate - we can not consecrate - we can not
hallow - this ground. the brave men, living and dead, who struggled here, have
consecrated it, far above our poor power to add or detract. the world will little
note, nor long remember what we say here, but it can never forget what they did
here. it is for us the living, rather, to be dedicated here to the unfinished
work which they who fought here have thus far so nobly advanced. it is rather
for us to be here dedicated to the great task remaining before us - that from these
honored dead we take increased devotion to that cause for which they gave the last
full measure of devotion - that we here highly resolve that these dead shall not have
died in vain - that this nation, under god, shall have a new birth of freedom - and
that government of the people, by the people, for the people, shall not perish
from the earth.

//Special_Reverse.txt
if you are reading this, your program works!
... congratulations!
if you did this right:
you ignored
dashes: (- -- ---),
tabs here: (	,	,	,	)
the four space here: ( , , , )
two new lines below:


and random chars: (*&%@^#)
great job.

*******************************************END**************************************************/
