"source $VIMRUNTIME/vimrc_example.vim
"source $VIMRUNTIME/mswin.vim
"source $VIMRUNTIME/menu.vim
"behave mswin

filetype plugin on

"���Ի���
set encoding=utf-8
langua message zh_CN.UTF-8
set fileencodings=ucs-bom,utf-8,cp936,gb18030,big5,euc-jp,euc-kr    "�����ַ������б�
"set guifontwide=������:h14 "�������ĵ�����
set guifont=Bitstream_Vera_Sans_Mono:h14:cANSI:b  "����Ӣ�ĵ����� :b�Ӵ� :iб��

syntax on                       "�Զ��﷨����
syntax enable                   "�﷨����

if v:version >= 700
	set completeopt=menu,longest  "�Զ���ȫCtrl+pʱ��һЩѡ�����һ��ʱ��ʾ�˵����ѡ����ʾ��ǰѡ��Ķ�����Ϣ
endif

set expandtab	                "��tab��ת��Ϊ�ո�
set formatoptions=tcqro         "ʹ��ע�ͻ���ʱ�Զ�����ǰ���Ŀո���Ǻ�
set history=50                  "����ð�����������������ʷ�б���Ϊ50
set hlsearch                    "����ʱ������ʾ���ҵ����ļ�
"set ignorecase smartcase       "����ʱ���Դ�Сд������һ�������ϴ�д��ĸ�Ա��ֶԴ�Сд����
set incsearch                  "������������ʱ����ʾ�������
set mouse=                      "�趨���κ�ģʽ����궼����
"set nobackup                    "�����ļ�ʱ������
set nocompatible                "�趨gvim��������ǿģʽ��, ������< cr > ��������
"set noignorecase                "Ĭ�����ִ�Сд
"set nolinebreak                 "�ڵ����м����
"set scrolloff=5                 "�趨����봰�����±߽�5��ʱ�����Զ�����
"set showcmd                     "��״̬����ʾĿ¼��ִ�е�ָ����δ��ɵ�ָ��Ƭ��Ҳ����ʾ����
set wrap                        "�Զ�������ʾ
set tabstop=4                   "����tab����Ϊ4
set softtabstop=4               "ʹ�ð��˸��ʱ����һ��ɾ��4���ո�    
set shiftwidth=4                "�趨>�����ƶ�ʱ���Ϊ4
set autoindent                  "�Զ�����
set ruler			            "�����Ϣ����ʾ�������
"set cindent                    "C�����������
set number          			"��ʾ�к�
set backspace=indent,eol,start    "���趨�Ļ��ڲ���ģʽ���޷�ʹ���˸����delete�ͻس�����



"���������к�״̬��
set cmdheight=1                 "�趨�����е�����Ϊ1
set laststatus=2                "��ʾ״̬��(Ĭ��ֵΪ1���޷���ʾ״̬��)
"windows:  set statusline=%F%m%r,%Y,%{&fileformat}\\\ASCII=\%b,HEX=\%B\\\ %l,%c%V\ %p%%\\\[\%L\ lines\ in\ all\]
set statusline=%F%m%r\ ASCII=\%b,HEX=\%B,%l,%c%V\ %L-%p%%
        "������״̬����ʾ����Ϣ���£�
            "   %F              ��ǰ�ļ���
            "   %m              ��ǰ�ļ��޸�״̬
            "   %r              ��ǰ�ļ��Ƿ�ֻ��
            "   %Y              ��ǰ�ļ�����
            "   %{&fileformat}  ��ǰ�ļ�����
            "   %b              ��ǰ��괦�ַ���ASCII��ֵ
            "   %B              ��ǰ��괦�ַ���ʮ������ֵ
            "   %l              ��ǰ����к�
            "   %c              ��ǰ����к�
            "   %V              ��ǰ��������к�(�����ַ���ռ�ֽ�������)
            "   %p              ��ǰ��ռ�������İٷֱ�
            "   %%              �ٷֺ�
            "   %L              ��ǰ�ļ�������

"��ɫ����
"colorscheme koehler             "������ɫ����

 "ע����ɫ
hi Comment  guifg=#999999      
"������ɫ
hi Constant guifg=#CD00CD 
"#E00CE0

"hi Identifier  guifg=#0000CD

"while for����ɫ
hi Statement    guifg=#BF2624

"�ؼ���������ɫ
hi Type        guifg=#00CD00 
"guibg=#39CB39 

"ת����ַ���ɫ
hi Special  guifg=#FB0C4B

"include��ȵ���ɫ
hi PreProc guifg=#0000CD 
"guibg=#0000FF

"����ƥ�����ɫ 
hi Search guifg=#FFFFFF guibg=#BF2624

"guibgΪ������ɫ��guifgΪ��ͨ������ɫ
hi Normal  guifg=#000000 guibg=#F8F8DB

"�кŵ���ɫ
hi LineNr   guifg=#BD871D

"������ɫ
hi Cursor   guibg=#000000

"״̬������ɫ
"hi StatusLine guifg=#00FF00
"hi StatusLineNC guifg=#33FF33


""""""""""""""""""""""""""""
"Tag list (ctags)
""""""""""""""""""""""""""""
let Tlist_Ctags_Cmd='/usr/bin/ctags'  "�趨ctags����·��
let Tlist_Show_One_File=1             "��ͬʱ��ʾ����ļ���tag��ֻ��ʾ��ǰ�ļ���  
let Tlist_Exit_OnlyWindow=1           "���taglist���������һ�����ڣ����˳�vim
"let Tlist_Use_Right_Window=1          "���Ҳര����ʾtaglist����
let Tlist_Use_SingleClick=1         "����tag����ת
"let Tlist_Auto_Open=1               "����VIM�Զ���taglist
"let Tlist_Close_On_Select=1         "ѡ��tag���Զ��ر�taglist
let Tlist_File_Fold_Auto_Close=1    "���ļ�ʱֻ��ʾ��ǰ�ļ���tag��������tag�۵�
let Tlist_WinHeight=200       "taglist���ڸ߶�
let Tlist_WinWidth=20        "taglist���ڿ��
"let Tlist_Use_Horiz_Window=1   "����taglist���ں�����ʾ
"ӳ��F8�򿪹ر�taglist����
map <expr> <F8> bufloaded("__Tag_List__")?"q":":TlistOpen\<cr>"   

""""""""""""""""""""""""""""
"NERDTree
""""""""""""""""""""""""""""
"let NERDChristmasTree=1            "��Tree���Լ���װ�εö��˶��Щ
"let NERDTreeAutoCenter=1           "���ƹ���ƶ�����һ������ʱ���Ƿ��Զ�������y������������
"let NERDTreeAutoCenterThreshold=1  "���������ʹ��
"let NERDTreeCaseSensitiveSort=1    "����ʱ�Ƿ��Сд����
"let NERDTreeHighlightCursorline=1  "�Ƿ������ʾ���������
"let NERDTreeBookmarksFile='/root/vim/bookmark.txt'  "ָд��ǩ�ļ�
let NERDTreeMouseMode=2            "ָ�����ģʽ��1Ϊ˫���򿪣�3Ϊ�����򿪣�2ΪĿ¼Ϊ�����򿪣��ļ�˫����
"let NERDTreeQuitOnOpen=1           "���ļ����Ƿ�ر�NerdTree����
let NERDTreeShowBookmarks=1        "�Ƿ�Ĭ����ʾ��ǩ�б�
let NERDTreeShowFiles=1            "�Ƿ�Ĭ����ʾ�ļ�
let NERDTreeShowHidden=1           "�Ƿ�Ĭ����ʾ�����ļ�
"let NERDTreeShowLineNumbers=1      "�Ƿ�Ĭ����ʾ�к�
"let NERDTreeSortOrder=             "�������������鷳�ˣ�������������ʽ
"let NERDTreeStatusline=             "����״̬��
"let NERDTreeWinPos='right'          "����λ�ã�left or right��
"let NERDTreeWinSize=20             "���ڿ�
"ӳ��F7�򿪹ر�NERDTree����
"winnr()    ��ȡ��ǰ���ڴ���ID
"winbufnr(winnr())   ��ȡ��ǰ���ڵĻ�����ID
"bufname(winbufnr(winnr()))  ��ȡ��ǰ���ڻ�����������
"strpart(bufname(winbufnr(winnr())), 10)   ��ȡ�ӻ��������ֵ�10�ַ���ʼ������
map <expr> <F7> bufloaded("NERD_tree_".strpart(bufname(winbufnr(winnr())),10))?"q":":NERDTree\<cr>"   


""""""""""""""""""""""""""""
"MRU
""""""""""""""""""""""""""""
"let MRU_File='/root/.vim/config/_vim_mru_files'  "�Ѽ�¼��������
"let MRU_Max_Entries=10                          "��ౣ���������¼
"let MRU_Window_Height=8                         "����MRU���ڸ߶�
"let MRU_Use_Current_Window=0                     "�����Ƿ���MRU���ڶ���һҳ
"ӳ��F2�򿪺͹ر�MRU���ڣ�bufloaded���жϻ����Ƿ����
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
"ӳ��,tgִ��ctags����
nmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
vmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
nmap ,ts :!ctags -Rn --c++-kinds=+p --fields=+ialS --extra=+q -o ~/.vim/systags /usr/include /usr/local/include<cr><cr>
set tags+=~/.vim/systags
set tags+=/usr/src/tags
set tags+=/usr/include/tags

""""""""""""""""""""""""""""
"SearchComplete
""""""""""""""""""""""""""""

"��ȡ��ǰ�ļ���
function GetFileName()
    return bufname(winbufnr(winnr()))  "��ȡ��ǰ���ڻ�����������
endfunction

"��ȡ��ǰʱ�䣬��ȷ����
function GetDateTime()
    return strftime("%Y-%m-%d %H:%M")
endfunction



"����ļ�˵����Ϣ
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





"��Ӻ���˵����Ϣ
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



"����Զ�������ע�ͣ����������Լ���ӵĴ���
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


"�Զ���ȫ��,",{,��
""nnoremap <silent> ( i()<ESC>i
""inoremap <silent> ( ()<ESC>i

""nnoremap <silent> { i{}<ESC>i
""inoremap <silent> { {}<ESC>i

""nnoremap <silent> [ i[]<ESC>i
""inoremap <silent> [ []<ESC>i

set pastetoggle=<F>

"�൱��window�µĸ���ճ��
"vnoremap <silent> y "+y
"vnoremap <silent> p "+p

nnoremap <C-j>  <C-W>j
nnoremap <C-k>  <C-W>k
nnoremap <C-h>  <C-W>h
nnoremap <C-l>  <C-W>l

"�ָ��ļ��ر�֮ǰ���λ��
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


"���ctrl+]ֻ��ת����һ���ؼ�������
nnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
vnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
