"source $VIMRUNTIME/vimrc_example.vim
"source $VIMRUNTIME/mswin.vim
"source $VIMRUNTIME/menu.vim
"behave mswin

filetype plugin on

"ÓïÑÔ»·¾³
set encoding=utf-8
langua message zh_CN.UTF-8
set fileencodings=ucs-bom,utf-8,cp936,gb18030,big5,euc-jp,euc-kr    "ÉèÖÃ×Ö·û±àÂëÁĞ±í
"set guifontwide=ĞÂËÎÌå:h14 "ÉèÖÃÖĞÎÄµÄ×ÖÌå
set guifont=Bitstream_Vera_Sans_Mono:h14:cANSI:b  "ÉèÖÃÓ¢ÎÄµÄ×ÖÌå :b¼Ó´Ö :iĞ±Ìå

syntax on                       "×Ô¶¯Óï·¨¸ßÁÁ
syntax enable                   "Óï·¨¸ßÁÁ

if v:version >= 700
	set completeopt=menu,longest  "×Ô¶¯²¹È«Ctrl+pÊ±µÄÒ»Ğ©Ñ¡Ïî£º¶àÓÚÒ»ÏîÊ±ÏÔÊ¾²Ëµ¥£¬×î³¤Ñ¡Ôñ£¬ÏÔÊ¾µ±Ç°Ñ¡ÔñµÄ¶îÍâĞÅÏ¢
endif

set expandtab	                "½«tab¼ü×ª»»Îª¿Õ¸ñ
set formatoptions=tcqro         "Ê¹µÃ×¢ÊÍ»»ĞĞÊ±×Ô¶¯¼ÓÉÏÇ°µ¼µÄ¿Õ¸ñºÍĞÇºÅ
set history=50                  "ÉèÖÃÃ°ºÅÃüÁîºÍËÑË÷ÃüÁîÀúÊ·ÁĞ±í³¤¶ÈÎª50
set hlsearch                    "ËÑË÷Ê±¸ßÁÁÏÔÊ¾±»ÕÒµ½µÄÎÄ¼ş
"set ignorecase smartcase       "ËÑË÷Ê±ºöÂÔ´óĞ¡Ğ´£¬µ«ÓĞÒ»¸ö»òÒÔÉÏ´óĞ´×ÖÄ¸ÈÔ±£³Ö¶Ô´óĞ¡Ğ´Ãô¸Ğ
set incsearch                  "ÊäÈëËÑË÷ÄÚÈİÊ±¾ÍÏÔÊ¾ËÑË÷½á¹û
set mouse=                      "Éè¶¨ÔÚÈÎºÎÄ£Ê½ÏÂÊó±ê¶¼¿ÉÓÃ
"set nobackup                    "¸²¸ÇÎÄ¼şÊ±²»±¸·İ
set nocompatible                "Éè¶¨gvimÔËĞĞÔÚÔöÇ¿Ä£Ê½ÏÂ, ²»ÉèÖÃ< cr > ²»Æğ×÷ÓÃ
"set noignorecase                "Ä¬ÈÏÇø·Ö´óĞ¡Ğ´
"set nolinebreak                 "ÔÚµ¥´ÊÖĞ¼ä¶ÏĞĞ
"set scrolloff=5                 "Éè¶¨¹â±êÀë´°¿ÚÉÏÏÂ±ß½ç5ĞĞÊ±´°¿Ú×Ô¶¯¹ö¶¯
"set showcmd                     "ÔÚ×´Ì¬À¸ÏÔÊ¾Ä¿Â¼ËùÖ´ĞĞµÄÖ¸¶¨£¬Î´Íê³ÉµÄÖ¸ÁîÆ¬¶ÎÒ²»áÏÔÊ¾³öÀ´
set wrap                        "×Ô¶¯»»ĞĞÏÔÊ¾
set tabstop=4                   "ÉèÖÃtab³¤¶ÈÎª4
set softtabstop=4               "Ê¹µÃ°´ÍË¸ñ¼üÊ±¿ÉÒÔÒ»´ÎÉ¾³ı4¸ö¿Õ¸ñ    
set shiftwidth=4                "Éè¶¨>ÃüÁîÒÆ¶¯Ê±¿í¶ÈÎª4
set autoindent                  "×Ô¶¯Ëõ½ø
set ruler			            "±ê³ßĞÅÏ¢£¬ÏÔÊ¾¹â±êÔÚÄÄ
"set cindent                    "CÓïÑÔËõ½ø·ç¸ñ
set number          			"ÏÔÊ¾ĞĞºÅ
set backspace=indent,eol,start    "²»Éè¶¨µÄ»°ÔÚ²åÈëÄ£Ê½ÀïÎŞ·¨Ê¹ÓÃÍË¸ñ¼ü£¬deleteºÍ»Ø³µ·ûµÈ



"ÉèÖÃÃüÁîĞĞºÍ×´Ì¬À¸
set cmdheight=1                 "Éè¶¨ÃüÁîĞĞµÄĞĞÊıÎª1
set laststatus=2                "ÏÔÊ¾×´Ì¬À¸(Ä¬ÈÏÖµÎª1£¬ÎŞ·¨ÏÔÊ¾×´Ì¬À¸)
"windows:  set statusline=%F%m%r,%Y,%{&fileformat}\\\ASCII=\%b,HEX=\%B\\\ %l,%c%V\ %p%%\\\[\%L\ lines\ in\ all\]
set statusline=%F%m%r\ ASCII=\%b,HEX=\%B,%l,%c%V\ %L-%p%%
        "ÉèÖÃÔÚ×´Ì¬ĞĞÏÔÊ¾µÄĞÅÏ¢ÈçÏÂ£º
            "   %F              µ±Ç°ÎÄ¼şÃû
            "   %m              µ±Ç°ÎÄ¼şĞŞ¸Ä×´Ì¬
            "   %r              µ±Ç°ÎÄ¼şÊÇ·ñÖ»¶Á
            "   %Y              µ±Ç°ÎÄ¼şÀàĞÍ
            "   %{&fileformat}  µ±Ç°ÎÄ¼ş±àÂë
            "   %b              µ±Ç°¹â±ê´¦×Ö·ûµÄASCIIÂëÖµ
            "   %B              µ±Ç°¹â±ê´¦×Ö·ûµÄÊ®Áù½øÖÆÖµ
            "   %l              µ±Ç°¹â±êĞĞºÅ
            "   %c              µ±Ç°¹â±êÁĞºÅ
            "   %V              µ±Ç°¹â±êĞéÄâÁĞºÅ(¸ù¾İ×Ö·ûËùÕ¼×Ö½ÚÊı¼ÆËã)
            "   %p              µ±Ç°ĞĞÕ¼×ÜĞĞÊıµÄ°Ù·Ö±È
            "   %%              °Ù·ÖºÅ
            "   %L              µ±Ç°ÎÄ¼ş×ÜĞĞÊı

"ÅäÉ«·½°¸
"colorscheme koehler             "ÉèÖÃÅäÉ«·½°¸

 "×¢ÊÍÑÕÉ«
hi Comment  guifg=#999999      
"³£Á¿ÑÕÉ«
hi Constant guifg=#CD00CD 
"#E00CE0

"hi Identifier  guifg=#0000CD

"while forµÈÑÕÉ«
hi Statement    guifg=#BF2624

"¹Ø¼ü´ÊÀàĞÍÑÕÉ«
hi Type        guifg=#00CD00 
"guibg=#39CB39 

"×ªÒåºó×Ö·ûÑÕÉ«
hi Special  guifg=#FB0C4B

"includeºêµÈµÄÑÕÉ«
hi PreProc guifg=#0000CD 
"guibg=#0000FF

"ËÑË÷Æ¥ÅäµÄÑÕÉ« 
hi Search guifg=#FFFFFF guibg=#BF2624

"guibgÎª±³¾°ÑÕÉ«£¬guifgÎªÆÕÍ¨×ÖÌåÑÕÉ«
hi Normal  guifg=#000000 guibg=#F8F8DB

"ĞĞºÅµÄÑÕÉ«
hi LineNr   guifg=#BD871D

"¹â±êµÄÑÕÉ«
hi Cursor   guibg=#000000

"×´Ì¬À¸µÄÑÕÉ«
"hi StatusLine guifg=#00FF00
"hi StatusLineNC guifg=#33FF33


""""""""""""""""""""""""""""
"Tag list (ctags)
""""""""""""""""""""""""""""
let Tlist_Ctags_Cmd='/usr/bin/ctags'  "Éè¶¨ctags³ÌĞòÂ·¾¶
let Tlist_Show_One_File=1             "²»Í¬Ê±ÏÔÊ¾¶à¸öÎÄ¼şµÄtag£¬Ö»ÏÔÊ¾µ±Ç°ÎÄ¼şµÄ  
let Tlist_Exit_OnlyWindow=1           "Èç¹ûtaglist´°¿ÚÊÇ×îºóÒ»¸ö´°¿Ú£¬ÔòÍË³övim
"let Tlist_Use_Right_Window=1          "ÔÚÓÒ²à´°¿ÚÏÔÊ¾taglist´°¿Ú
let Tlist_Use_SingleClick=1         "µ¥»÷tag¾ÍÌø×ª
"let Tlist_Auto_Open=1               "Æô¶¯VIM×Ô¶¯´ò¿ªtaglist
"let Tlist_Close_On_Select=1         "Ñ¡Ôñtagºó×Ô¶¯¹Ø±Õtaglist
let Tlist_File_Fold_Auto_Close=1    "¶àÎÄ¼şÊ±Ö»ÏÔÊ¾µ±Ç°ÎÄ¼şµÄtag£¬ÆäËüµÄtagÕÛµş
let Tlist_WinHeight=200       "taglist´°¿Ú¸ß¶È
let Tlist_WinWidth=20        "taglist´°¿Ú¿í¶È
"let Tlist_Use_Horiz_Window=1   "ÉèÖÃtaglist´°¿ÚºáÏòÏÔÊ¾
"Ó³ÉäF8´ò¿ª¹Ø±Õtaglist´°¿Ú
map <expr> <F8> bufloaded("__Tag_List__")?"q":":TlistOpen\<cr>"   

""""""""""""""""""""""""""""
"NERDTree
""""""""""""""""""""""""""""
"let NERDChristmasTree=1            "ÈÃTree°Ñ×Ô¼º¸ø×°ÊÎµÃ¶à×Ë¶à²ÊĞ©
"let NERDTreeAutoCenter=1           "¿ØÖÆ¹â±êÒÆ¶¯³¬¹ıÒ»¶¨¾àÀëÊ±£¬ÊÇ·ñ×Ô¶¯½«½¹µãyµ÷Õûµ½ÆÁÖĞĞÄ
"let NERDTreeAutoCenterThreshold=1  "ÓëÉÏÃæÅäºÏÊ¹ÓÃ
"let NERDTreeCaseSensitiveSort=1    "ÅÅĞòÊ±ÊÇ·ñ´óĞ¡Ğ´Ãô¸Ğ
"let NERDTreeHighlightCursorline=1  "ÊÇ·ñ¸ßÁÁÏÔÊ¾¹â±êËùÔÚĞĞ
"let NERDTreeBookmarksFile='/root/vim/bookmark.txt'  "Ö¸Ğ´ÊéÇ©ÎÄ¼ş
let NERDTreeMouseMode=2            "Ö¸¶¨Êó±êÄ£Ê½£º1ÎªË«»÷´ò¿ª£¬3Îªµ¥»÷´ò¿ª£¬2ÎªÄ¿Â¼Îªµ¥»÷´ò¿ª£¬ÎÄ¼şË«»÷´ò¿ª
"let NERDTreeQuitOnOpen=1           "´ò¿ªÎÄ¼şºóÊÇ·ñ¹Ø±ÕNerdTree´°¿Ú
let NERDTreeShowBookmarks=1        "ÊÇ·ñÄ¬ÈÏÏÔÊ¾ÊéÇ©ÁĞ±í
let NERDTreeShowFiles=1            "ÊÇ·ñÄ¬ÈÏÏÔÊ¾ÎÄ¼ş
let NERDTreeShowHidden=1           "ÊÇ·ñÄ¬ÈÏÏÔÊ¾Òş²ØÎÄ¼ş
"let NERDTreeShowLineNumbers=1      "ÊÇ·ñÄ¬ÈÏÏÔÊ¾ĞĞºÅ
"let NERDTreeSortOrder=             "ÅÅĞò¹æÔò£¬Õâ¸ö¾ÍÂé·³ÁË£¬¿ÉÒÔÓÃÕıÔò±í´ïÊ½
"let NERDTreeStatusline=             "´°¿Ú×´Ì¬À¸
"let NERDTreeWinPos='right'          "´°¿ÚÎ»ÖÃ£¨left or right£©
"let NERDTreeWinSize=20             "´°¿Ú¿í
"Ó³ÉäF7´ò¿ª¹Ø±ÕNERDTree´°¿Ú
"winnr()    »ñÈ¡µ±Ç°´°¿Ú´°¿ÚID
"winbufnr(winnr())   »ñÈ¡µ±Ç°´°¿ÚµÄ»º³åÇøID
"bufname(winbufnr(winnr()))  »ñÈ¡µ±Ç°´°¿Ú»º³åÇøµÄÃû×Ö
"strpart(bufname(winbufnr(winnr())), 10)   ½ØÈ¡´Ó»º³åÇøÃû×ÖµÚ10×Ö·û¿ªÊ¼µ½½áÊø
map <expr> <F7> bufloaded("NERD_tree_".strpart(bufname(winbufnr(winnr())),10))?"q":":NERDTree\<cr>"   


""""""""""""""""""""""""""""
"MRU
""""""""""""""""""""""""""""
"let MRU_File='/root/.vim/config/_vim_mru_files'  "°Ñ¼ÇÂ¼±£´æÔÚÄÄ
"let MRU_Max_Entries=10                          "×î¶à±£´æ¶àÉÙÌõ¼ÇÂ¼
"let MRU_Window_Height=8                         "ÉèÖÃMRU´°¿Ú¸ß¶È
"let MRU_Use_Current_Window=0                     "ÉèÖÃÊÇ·ñÈÃMRU´°¿Ú¶ÀµãÒ»Ò³
"Ó³ÉäF2´ò¿ªºÍ¹Ø±ÕMRU´°¿Ú£¬bufloadedÊÇÅĞ¶Ï»º³åÊÇ·ñ¼ÓÔØ
map <expr> <F2> bufloaded("__MRU_Files__")?"q":":MRU\<cr>"   


""""""""""""""""""""""""""""
"Omincppcomplete
""""""""""""""""""""""""""""

""""""""""""""""""""""""""""
"A
""""""""""""""""""""""""""""
nnoremap <silent> <F12> :AV<CR>

""""""""""""""""""""""""""""
"Grep
""""""""""""""""""""""""""""
nnoremap <silent> <F3> :Rgrep<CR>


""""""""""""""""""""""""""""
"echofun
""""""""""""""""""""""""""""
"Ó³Éä,tgÖ´ĞĞctagsÃüÁî
nmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
vmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
nmap ,ts :!ctags -Rn --c++-kinds=+p --fields=+ialS --extra=+q -o ~/.vim/systags /usr/include /usr/local/include<cr><cr>
set tags+=~/.vim/systags
set tags+=/usr/src/tags
set tags+=/usr/include/tags

""""""""""""""""""""""""""""
"SearchComplete
""""""""""""""""""""""""""""

"»ñÈ¡µ±Ç°ÎÄ¼şÃû
function GetFileName()
    return bufname(winbufnr(winnr()))  "»ñÈ¡µ±Ç°´°¿Ú»º³åÇøµÄÃû×Ö
endfunction

"»ñÈ¡µ±Ç°Ê±¼ä£¬¾«È·µ½·Ö
function GetDateTime()
    return strftime("%Y-%m-%d %H:%M")
endfunction



"Ìí¼ÓÎÄ¼şËµÃ÷ĞÅÏ¢
nnoremap <silent> <C-S-2> ggi/*<CR>
\*******************************************************************************
\<CR>*<CR>*   FileName    :    <C-R>=GetFileName()<ESC>
\<CR>*<CR>*   Author      :    kyo <kyo2018@gmail.com>
\<CR>*<CR>*   Created     :    <C-R>=GetDateTime()<ESC>
\<CR>*<CR>*   Description :
\<CR>*<CR>
\*******************************************************************************
\<CR>*/<CR><CR>

inoremap <silent> <C-S-1> <ESC>ggi/*<CR>
\*******************************************************************************
\<CR>*<CR>*   FileName    :    <C-R>=GetFileName()<ESC>
\<CR>*<CR>*   Author      :    kyo <kyo2018@gmail.com>
\<CR>*<CR>*   Created     :    <C-R>=GetDateTime()<ESC>
\<CR>*<CR>*   Description :
\<CR>*<CR>
\*******************************************************************************
\<CR>*/<CR><CR>





"Ìí¼Óº¯ÊıËµÃ÷ĞÅÏ¢
nnoremap <silent> <F4> i<CR>/*<CR>
\*******************************************************************************
\<CR>*<CR>*   Function    :    
\<CR>*<CR>*   Input       :    
\<CR>*<CR>*   Output      :    
\<CR>*<CR>*   Return      :    
\<CR>*<CR>*   Description :
\<CR>*<CR>*   Author      :    <C-R>=GetDateTime()<ESC>   by   kyo <kyo2018@gmail.com>
\<CR>*<CR>
\*******************************************************************************
\<CR>*/<CR><CR>

inoremap <silent> <F4> <CR>/*<CR>
\*******************************************************************************
\<CR>*<CR>*   Function    :    
\<CR>*<CR>*   Input       :    
\<CR>*<CR>*   Output      :    
\<CR>*<CR>*   Return      :    
\<CR>*<CR>*   Description :
\<CR>*<CR>*   Author      :    <C-R>=GetDateTime()<ESC>   by   kyo <kyo2018@gmail.com>
\<CR>*<CR>
\*******************************************************************************
\<CR>*/<CR><CR>



"Ìí¼Ó×Ô¶¨Òå´úÂë¿é×¢ÊÍ£¬ÒÔÇø±ğÊÇ×Ô¼ºÌí¼ÓµÄ´úÂë
nnoremap <silent> <C-F5> O
\/* kyo Start  <C-R>=GetDateTime()<ESC> */<ESC>o
\/* kyo End <C-R>=GetDateTime()<ESC> */<ESC>O

inoremap <silent> <C-F5> <ESC>O
\/* kyo Start  <C-R>=GetDateTime()<ESC> */<ESC>o
\/* kyo End <C-R>=GetDateTime()<ESC> */<ESC>O

vnoremap <silent> <F5> dO
\#if 0    //kyo Comment Start <C-R>=GetDateTime()<ESC><ESC>o
\#endif   //kyo Comment End   <C-R>=GetDateTime()<ESC><ESC>O<CR><ESC>p

nnoremap <silent> <F5> O
\#if 0    //kyo Comment Start <C-R>=GetDateTime()<ESC><ESC>o
\#endif   //kyo Comment End   <C-R>=GetDateTime()<ESC><ESC>O

inoremap <silent> <F5> <ESC>O
\#if 0    //kyo Comment Start <C-R>=GetDateTime()<ESC><ESC>o
\#endif   //kyo Comment End   <C-R>=GetDateTime()<ESC><ESC>O


"×Ô¶¯²¹È«£¨,",{,£Û
""nnoremap <silent> ( i()<ESC>i
""inoremap <silent> ( ()<ESC>i

""nnoremap <silent> { i{}<ESC>i
""inoremap <silent> { {}<ESC>i

""nnoremap <silent> [ i[]<ESC>i
""inoremap <silent> [ []<ESC>i

set pastetoggle=<F>

"Ïàµ±ÓÚwindowÏÂµÄ¸´ÖÆÕ³Ìù
"vnoremap <silent> y "+y
"vnoremap <silent> p "+p

nnoremap <C-j>  <C-W>j
nnoremap <C-k>  <C-W>k
nnoremap <C-h>  <C-W>h
nnoremap <C-l>  <C-W>l

"»Ö¸´ÎÄ¼ş¹Ø±ÕÖ®Ç°¹â±êÎ»ÖÃ
if has("autocmd")
  au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
endif

nnoremap ,ms  i#include <stdio.h><CR>#include <string.h><CR>
\#include <stdlib.h><CR>#include <sys/types.h><CR>#include <sys/stat.h><CR>
\#include <errno.h><CR>#include <fcntl.h><CR>#include <unistd.h><CR><CR>
\int main(void)<CR>{<CR>return 0;<ESC>v=o}<ESC>=kO

vnoremap "y  :w! /tmp/kyo.vim<CR><CR>
vnoremap "p  :r /tmp/kyo.vim<CR><CR>
nnoremap "p  :r /tmp/kyo.vim<CR><CR>

nnoremap ,ma i#include <stdio.h><CR><CR>int main(void)<CR>{<CR>return 0;<ESC>v=o}<ESC>v=kO

nnoremap ,mc i#include <iostream><CR><CR>using namespace std;<CR><CR>int main(void)<CR>{<CR>return 0;<ESC>v=o}<ESC>v=kO

let @q="o{}ioj"

nnoremap ,de    :r /uplooking/define.txt<CR><CR>


"½â¾öctrl+]Ö»Ìø×ªµ½µÚÒ»¸ö¹Ø¼ü´ÊÎÊÌâ
nnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
vnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
