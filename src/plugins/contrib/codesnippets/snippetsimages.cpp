/*
	This file is part of SnipList,
	Copyright (C) 2006 Pecan Heber

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/
// RCS-ID: $Id: snippetsimages.cpp 28 2007-04-01 14:32:57Z Pecan $

#ifdef WX_PRECOMP
    #include "wx_pch.h"
#else
    #include <wx/mstream.h>
    #include <wx/icon.h>
    #include <wx/colour.h>
#endif
    #include <wx/image.h>


#include "snippetsimages.h"
#include "version.h"

    // forward declarations to keep data at bottom of this file
extern char* allsnippets[];
extern char* category[];
extern char* snippet[];
extern char* snippetText[];
extern char* snippetFile[];
extern char* xpm_data_ptrs[] ;
// ----------------------------------------------------------------------------
SnipImages::SnipImages()
// ----------------------------------------------------------------------------
{
    //ctor

	m_pSnippetsTreeImageList = new wxImageList(16, 16, true, SNIPPETS_TREE_IMAGE_COUNT);
		// Load images
	//wxImage::AddHandler( new wxPNGHandler );
	wxImage::AddHandler( new wxXPMHandler );


	for (int i = 0; i < SNIPPETS_TREE_IMAGE_COUNT; ++i)
	{
        RegisterImage( (char**)xpm_data_ptrs[i]);
	}
}
// ----------------------------------------------------------------------------
void SnipImages::RegisterImage(char** xpm_data )
// ----------------------------------------------------------------------------
{
    //wxMemoryInputStream stream(xpm_data, strlen(xpm_data)+1);
    //wxImage img(stream, wxBITMAP_TYPE_XPM);
    //arrowBmp = wxBitmap(FNB::left_arrow_disabled_xpm);
    //arrowBmp = wxBitmap(FNB::left_arrow_disabled_xpm);
    wxBitmap bmp(xpm_data);
    wxColor maskColor(255, 0, 255);
    //int idx =
    m_pSnippetsTreeImageList->Add(bmp, maskColor);

}
// ----------------------------------------------------------------------------
wxIcon SnipImages::GetSnipListIcon(int index)
// ----------------------------------------------------------------------------
{
    return wxIcon((char**)xpm_data_ptrs[index]);
}
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
SnipImages::~SnipImages()
// ----------------------------------------------------------------------------
{
    //dtor
}
// ----------------------------------------------------------------------------
//  XPM image definitions for AllSnippets, Category, Snippet, SnippetText, SnippetFile
// ----------------------------------------------------------------------------
    // array holding pointers to XPM char arrays
char* xpm_data_ptrs[ SNIPPETS_TREE_IMAGE_COUNT ]
        = {(char*)allsnippets,(char*)category,(char*)snippet,(char*)snippetText,(char*)snippetFile};
/* XPM */
 char *allsnippets[] = {
/* columns rows colors chars-per-pixel */
"16 16 93 2",
"   c black",
".  c #176A28",
"X  c #207230",
"o  c #237432",
"O  c #297A39",
"+  c #2C7C3B",
"@  c #2E7E3C",
"#  c #338241",
"$  c #358443",
"%  c #378645",
"&  c #398846",
"*  c #3C8A49",
"=  c #3E8C4B",
"-  c #408E4D",
";  c #42904F",
":  c #449251",
">  c #459251",
",  c #479453",
"<  c #499655",
"1  c #4B9857",
"2  c #4D9A59",
"3  c #4E9A59",
"4  c #4F9C5B",
"5  c #509C5B",
"6  c #529E5D",
"7  c #54A05F",
"8  c #56A261",
"9  c #57A262",
"0  c #59A463",
"q  c #5BA665",
"w  c #5DA867",
"e  c #60AA69",
"r  c #60AA6A",
"t  c #62AC6B",
"y  c #62AC6C",
"u  c #64AE6D",
"i  c #64AE6E",
"p  c #66B06F",
"a  c #66B070",
"s  c #69B271",
"d  c #69B272",
"f  c #6BB473",
"g  c #6BB474",
"h  c #6DB675",
"j  c #6DB676",
"k  c #6FB877",
"l  c #70B878",
"z  c #72BA7A",
"x  c #74BC7C",
"c  c #76BE7D",
"v  c #77BE7E",
"b  c #78C07F",
"n  c #79C080",
"m  c #7BC282",
"M  c #7BC382",
"N  c #7DC484",
"B  c #7EC484",
"V  c #7FC686",
"C  c magenta",
"Z  c #80C686",
"A  c #81C888",
"S  c #82C888",
"D  c #84CA8A",
"F  c #86CC8C",
"G  c #87CC8C",
"H  c #88CE8E",
"J  c #89CE8E",
"K  c #8AD090",
"L  c #8BD090",
"P  c #8DD292",
"I  c #8FD494",
"U  c #91D696",
"Y  c #92D696",
"T  c #93D898",
"R  c #94D899",
"E  c #96DA9A",
"W  c #98DC9C",
"Q  c #9ADE9E",
"!  c #9DE0A0",
"~  c #9DE0A1",
"^  c #9FE2A3",
"/  c #A1E4A4",
"(  c #A4E6A6",
")  c #A6E8A8",
"_  c #A8EAAB",
"`  c #AAECAD",
"'  c #ADEEAF",
"]  c #AFF0B1",
"[  c #B4F4B5",
"{  c #B6F6B7",
"}  c #B8F8B9",
"|  c #BFFEBF",
" . c #C0FFC0",
/* pixels */
"C                 C C C C C C C ",
"C    .} ) ~ K b p   C C C C C C ",
"                            C C ",
"   . .} ] ) ~ T K A b k p   C C ",
"  | |                 k p   C C ",
"  [ [    .} ) ~ K b p   p   C C ",
"  _                             ",
"  ~    . .} ] ) ~ T K A b k p   ",
"  U   | [ ' ( Q U H V x j u q   ",
"  F   [ ' / W U F N x f t 0 5   ",
"  M   _ ~ E P D m z s e 8 2 >   ",
"      ~ R P Z m l p w 7 1 ; &   ",
"C C   U H Z x j u q 6 < - % @   ",
"C C   H V x j e 0 5 , = $ + o   ",
"C C   m z g e 8 2 > * # O X .   ",
"C C                             "
};
// ----------------------------------------------------------------------------
/* XPM */
char *category[] = {
/* columns rows colors chars-per-pixel */
"16 16 93 2",
"   c black",
".  c #176A28",
"X  c #207230",
"o  c #237432",
"O  c #297A39",
"+  c #2C7C3B",
"@  c #2E7E3C",
"#  c #338241",
"$  c #358443",
"%  c #378645",
"&  c #398846",
"*  c #3C8A49",
"=  c #3E8C4B",
"-  c #408E4D",
";  c #42904F",
":  c #449251",
">  c #459251",
",  c #479453",
"<  c #499655",
"1  c #4B9857",
"2  c #4D9A59",
"3  c #4E9A59",
"4  c #4F9C5B",
"5  c #509C5B",
"6  c #529E5D",
"7  c #54A05F",
"8  c #56A261",
"9  c #57A262",
"0  c #59A463",
"q  c #5BA665",
"w  c #5DA867",
"e  c #60AA69",
"r  c #60AA6A",
"t  c #62AC6B",
"y  c #62AC6C",
"u  c #64AE6D",
"i  c #64AE6E",
"p  c #66B06F",
"a  c #66B070",
"s  c #69B271",
"d  c #69B272",
"f  c #6BB473",
"g  c #6BB474",
"h  c #6DB675",
"j  c #6DB676",
"k  c #6FB877",
"l  c #70B878",
"z  c #72BA7A",
"x  c #74BC7C",
"c  c #76BE7D",
"v  c #77BE7E",
"b  c #78C07F",
"n  c #79C080",
"m  c #7BC282",
"M  c #7BC382",
"N  c #7DC484",
"B  c #7EC484",
"V  c #7FC686",
"C  c magenta",
"Z  c #80C686",
"A  c #81C888",
"S  c #82C888",
"D  c #84CA8A",
"F  c #86CC8C",
"G  c #87CC8C",
"H  c #88CE8E",
"J  c #89CE8E",
"K  c #8AD090",
"L  c #8BD090",
"P  c #8DD292",
"I  c #8FD494",
"U  c #91D696",
"Y  c #92D696",
"T  c #93D898",
"R  c #94D899",
"E  c #96DA9A",
"W  c #98DC9C",
"Q  c #9ADE9E",
"!  c #9DE0A0",
"~  c #9DE0A1",
"^  c #9FE2A3",
"/  c #A1E4A4",
"(  c #A4E6A6",
")  c #A6E8A8",
"_  c #A8EAAB",
"`  c #AAECAD",
"'  c #ADEEAF",
"]  c #AFF0B1",
"[  c #B4F4B5",
"{  c #B6F6B7",
"}  c #B8F8B9",
"|  c #BFFEBF",
" . c #C0FFC0",
/* pixels */
"C C C C C C C C C C C C C C C C ",
"C C C C C C C C C C C C C C C C ",
"C C                 C C C C C C ",
"C C    .} ( ^ K b p   C C C C C ",
"C                             C ",
"C    . .{ [ ) ^ T K A b k p   C ",
"C   | [ ' ( W I H V c h u q   C ",
"C   [ ` / W I G M c f t 0 4   C ",
"C   _ / E P A m z d e 8 2 >   C ",
"C   ~ E P Z m z a w 8 < - &   C ",
"C   I J V c h u q 6 < - % @   C ",
"C   G B x g y q 5 , = $ + o   C ",
"C   m z d e 8 2 > * # O X .   C ",
"C                             C ",
"C C C C C C C C C C C C C C C C ",
"C C C C C C C C C C C C C C C C "
};
// ----------------------------------------------------------------------------
/* XPM */
char *snippet[] = {
/* columns rows colors chars-per-pixel */
"16 16 111 2",
"   c black",
".  c #217231",
"X  c #277836",
"o  c #287937",
"O  c #2D7D3B",
"+  c #2E7E3D",
"@  c #2F7F3E",
"#  c gray25",
"$  c #338241",
"%  c #348342",
"&  c #358543",
"*  c #378645",
"=  c #398746",
"-  c #3A8947",
";  c #3B8A49",
":  c #3D8B4A",
">  c #3E8C4B",
",  c #3E8D4B",
"<  c #408E4D",
"1  c #418F4E",
"2  c #42904F",
"3  c #449251",
"4  c #459352",
"5  c #469352",
"6  c #489554",
"7  c #4A9756",
"8  c #4B9857",
"9  c #4C9857",
"0  c #4D9958",
"q  c #4E9B5A",
"w  c #509C5B",
"e  c #519D5C",
"r  c #529D5D",
"t  c #539E5E",
"y  c #54A05F",
"u  c #56A161",
"i  c #57A262",
"p  c #57A362",
"a  c #58A463",
"s  c #5AA564",
"d  c #5BA665",
"f  c #5CA766",
"g  c #5DA867",
"h  c #5EA968",
"j  c #60AA69",
"k  c #60AA6A",
"l  c #61AB6B",
"z  c #62AC6B",
"x  c #62AC6C",
"c  c #63AD6C",
"v  c #63AD6D",
"b  c #64AE6D",
"n  c #66AF6F",
"m  c #66B06F",
"M  c #67B070",
"N  c #68B271",
"B  c #69B272",
"V  c #6AB372",
"C  c #6AB373",
"Z  c #6CB574",
"A  c #6DB675",
"S  c #6EB777",
"D  c #6FB777",
"F  c #70B878",
"G  c #70B978",
"H  c #71B979",
"J  c #72BA7A",
"K  c #73BB7B",
"L  c #74BC7C",
"P  c #75BC7C",
"I  c #76BD7D",
"U  c #76BE7D",
"Y  c #78BF7F",
"T  c #78C080",
"R  c #79C080",
"E  c #7AC281",
"W  c #7BC382",
"Q  c #7CC383",
"!  c #7EC585",
"~  c #7FC585",
"^  c #7FC686",
"/  c magenta",
"(  c #80C787",
")  c #81C888",
"_  c #82C888",
"`  c #84CA8A",
"'  c #85CB8B",
"]  c #86CC8C",
"[  c #87CD8D",
"{  c #88CD8D",
"}  c #8ACF90",
"|  c #8BD090",
" . c #8DD292",
".. c #8ED393",
"X. c #90D595",
"o. c #93D798",
"O. c #95D999",
"+. c #96DA9A",
"@. c #99DD9D",
"#. c #9CDF9F",
"$. c #9CDFA0",
"%. c #9FE2A2",
"&. c #A2E4A5",
"*. c #A4E6A6",
"=. c #A5E7A8",
"-. c #A8EAAA",
";. c #ABECAD",
":. c #AEEFAF",
">. c #B2F3B3",
",. c #B3F4B5",
"<. c #B9F9BA",
/* pixels */
"/ / / / / / / / / / / / / / / / ",
"/                             / ",
"/   <.,.;.-.&.%.O.X.| ' ! T   / ",
"/   >.# # # # # # # # # # H   / ",
"/   ;.=.%.@.o.| [ _ T U H V   / ",
"/   *.# # # # # # # U S M c   / ",
"/   $.O.X.| ' ^ T U A M l d   / ",
"/   O.# # # # # # # n h d y   / ",
"/   | [ _ Q U H B v h a e q   / ",
"/   [ _ T U A B c g i e q 3   / ",
"/   ^ # # # # # # # # # # >   / ",
"/   Y H A n k d y q 6 2 : *   / ",
"/   H # # # # # # # < ; & +   / ",
"/   B c g a e 9 3 < - & + o   / ",
"/   l g i w 6 3 > - $ O X .   / ",
"/                             / "
};
// ----------------------------------------------------------------------------
/* XPM */
char *snippetText[] = {
/* columns rows colors chars-per-pixel */
"16 16 98 2",
"   c black",
".  c #217231",
"X  c #277836",
"o  c #287937",
"O  c #2D7D3B",
"+  c #2E7E3D",
"@  c #2F7F3E",
"#  c gray25",
"$  c #338241",
"%  c #348342",
"&  c #358543",
"*  c #378645",
"=  c #398746",
"-  c #3A8947",
";  c #3B8A49",
":  c #3D8B4A",
">  c #3E8C4B",
",  c #3E8D4B",
"<  c #408E4D",
"1  c #418F4E",
"2  c #42904F",
"3  c #449251",
"4  c #459352",
"5  c #469352",
"6  c #489554",
"7  c #4A9756",
"8  c #4B9857",
"9  c #4C9857",
"0  c #4D9958",
"q  c #4E9B5A",
"w  c #509C5B",
"e  c #519D5C",
"r  c #529D5D",
"t  c #539E5E",
"y  c #54A05F",
"u  c #56A161",
"i  c #57A262",
"p  c #57A362",
"a  c #58A463",
"s  c #5AA564",
"d  c #5BA665",
"f  c #5CA766",
"g  c #5DA867",
"h  c #5EA968",
"j  c #60AA69",
"k  c #60AA6A",
"l  c #61AB6B",
"z  c #62AC6B",
"x  c #62AC6C",
"c  c #63AD6D",
"v  c #64AE6D",
"b  c #66AF6F",
"n  c #66B06F",
"m  c #67B070",
"M  c #68B271",
"N  c #69B272",
"B  c #6AB372",
"V  c #6CB574",
"C  c #6DB675",
"Z  c #6EB777",
"A  c #6FB777",
"S  c #70B978",
"D  c #71B979",
"F  c #72BA7A",
"G  c #73BB7B",
"H  c #74BC7C",
"J  c #75BC7C",
"K  c #76BE7D",
"L  c #78BF7F",
"P  c #78C080",
"I  c #7AC281",
"U  c #7CC383",
"Y  c #7EC585",
"T  c #7FC686",
"R  c magenta",
"E  c #80C787",
"W  c #82C888",
"Q  c #84CA8A",
"!  c #85CB8B",
"~  c #86CC8C",
"^  c #88CD8D",
"/  c #8ACF90",
"(  c #8BD090",
")  c #8ED393",
"_  c #90D595",
"`  c #95D999",
"'  c #96DA9A",
"]  c #9CDF9F",
"[  c #9CDFA0",
"{  c #A2E4A5",
"}  c #A4E6A6",
"|  c #A8EAAA",
" . c #ABECAD",
".. c #AEEFAF",
"X. c #B2F3B3",
"o. c #B3F4B5",
"O. c #B9F9BA",
"+. c #F6ECEC",
/* pixels */
"R R R R R R R R R R R R R R R R ",
"R                             R ",
"R   O.o...| { ] ` _ ( Q Y P   R ",
"R   X.+.+.+.+.+.+.+.+.+.+.D   R ",
"R    .+.+.+.+.+.+.+.+.+.+.B   R ",
"R   } # # # # +.+.# H A M x   R ",
"R   [ ` _ ( ! +.+.G C m l d   R ",
"R   ` # # # # +.+.# b h d y   R ",
"R   ( ^ E U H +.+.v h a e 0   R ",
"R   ^ E U H D +.+.g p e 0 4   R ",
"R   E # # # # +.+.# # # # >   R ",
"R   L D V b k +.+.q 6 2 : *   R ",
"R   D # # # # # # # < ; & +   R ",
"R   B x g p e 9 4 < - & + o   R ",
"R   l g p w 6 4 > - $ O X .   R ",
"R                             R "
};
// ----------------------------------------------------------------------------
/* XPM */
char *snippetFile[] = {
/* columns rows colors chars-per-pixel */
"16 16 96 2",
"   c black",
".  c #217231",
"X  c #277836",
"o  c #287937",
"O  c #2D7D3B",
"+  c #2E7E3D",
"@  c #2F7F3E",
"#  c gray25",
"$  c #338241",
"%  c #348342",
"&  c #358543",
"*  c #378645",
"=  c #398746",
"-  c #3A8947",
";  c #3B8A49",
":  c #3D8B4A",
">  c #3E8C4B",
",  c #3E8D4B",
"<  c #408E4D",
"1  c #418F4E",
"2  c #42904F",
"3  c #449251",
"4  c #459352",
"5  c #469352",
"6  c #489554",
"7  c #4A9756",
"8  c #4B9857",
"9  c #4C9857",
"0  c #4D9958",
"q  c #4E9B5A",
"w  c #509C5B",
"e  c #519D5C",
"r  c #529D5D",
"t  c #539E5E",
"y  c #54A05F",
"u  c #56A161",
"i  c #57A262",
"p  c #57A362",
"a  c #58A463",
"s  c #5AA564",
"d  c #5BA665",
"f  c #5CA766",
"g  c #5DA867",
"h  c #5EA968",
"j  c #60AA69",
"k  c #60AA6A",
"l  c #61AB6B",
"z  c #62AC6B",
"x  c #62AC6C",
"c  c #63AD6C",
"v  c #63AD6D",
"b  c #64AE6D",
"n  c #66AF6F",
"m  c #66B06F",
"M  c #67B070",
"N  c #68B271",
"B  c #69B272",
"V  c #6AB372",
"C  c #6AB373",
"Z  c #6DB675",
"A  c #6EB777",
"S  c #6FB777",
"D  c #70B878",
"F  c #70B978",
"G  c #71B979",
"H  c #73BB7B",
"J  c #74BC7C",
"K  c #75BC7C",
"L  c #76BD7D",
"P  c #78BF7F",
"I  c #78C080",
"U  c #79C080",
"Y  c #7EC585",
"T  c #7FC585",
"R  c #7FC686",
"E  c magenta",
"W  c #84CA8A",
"Q  c #85CB8B",
"!  c #86CC8C",
"~  c #8ACF90",
"^  c #8BD090",
"/  c #8ED393",
"(  c #90D595",
")  c #95D999",
"_  c #96DA9A",
"`  c #9CDF9F",
"'  c #9CDFA0",
"]  c #A2E4A5",
"[  c #A4E6A6",
"{  c #A8EAAA",
"}  c #ABECAD",
"|  c #AEEFAF",
" . c #B2F3B3",
".. c #B3F4B5",
"X. c #B9F9BA",
"o. c #F6ECEC",
/* pixels */
"E E E E E E E E E E E E E E E E ",
"E                             E ",
"E   X...| { ] ` ) ( ^ Q T I   E ",
"E    .o.o.o.o.o.o.o.o.# # G   E ",
"E   } o.o.o.o.o.o.o.o.L D V   E ",
"E   [ o.o.# # # # # L A M v   E ",
"E   ' o.o.^ Q T I G Z M l d   E ",
"E   ) o.o.o.o.o.# # n h d y   E ",
"E   / o.o.o.o.o.V n h a t 0   E ",
"E   ! o.o.L Z B v g p w 8 4   E ",
"E   R o.o.# # # # # # # # ,   E ",
"E   P o.o.n k d y q 6 2 : *   E ",
"E   G o.o.# # # # # < ; & +   E ",
"E   B v g a t 7 5 < - & + o   E ",
"E   l g p 0 7 5 , = $ O X .   E ",
"E                             E "
};
// ----------------------------------------------------------------------------
