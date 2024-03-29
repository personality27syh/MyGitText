"source $VIMRUNTIME/vimrc_example.vim
"source $VIMRUNTIME/mswin.vim
"source $VIMRUNTIME/menu.vim
"behave mswin

filetype plugin on

"语言环境
set encoding=utf-8
langua message zh_CN.UTF-8
set fileencodings=ucs-bom,utf-8,cp936,gb18030,big5,euc-jp,euc-kr    "设置字符编码列表
"set guifontwide=新宋体:h14 "设置中文的字体
set guifont=Bitstream_Vera_Sans_Mono:h14:cANSI:b  "设置英文的字体 :b加粗 :i斜体

syntax on                       "自动语法高亮
syntax enable                   "语法高亮

if v:version >= 700
	set completeopt=menu,longest  "自动补全Ctrl+p时的一些选项：多于一项时显示菜单，最长选择，显示当前选择的额外信息
endif

set expandtab	                "将tab键转换为空格
set formatoptions=tcqro         "使得注释换行时自动加上前导的空格和星号
set history=50                  "设置冒号命令和搜索命令历史列表长度为50
set hlsearch                    "搜索时高亮显示被找到的文件
"set ignorecase smartcase       "搜索时忽略大小写，但有一个或以上大写字母仍保持对大小写敏感
set incsearch                  "输入搜索内容时就显示搜索结果
set mouse=                      "设定在任何模式下鼠标都可用
"set nobackup                    "覆盖文件时不备份
set nocompatible                "设定gvim运行在增强模式下, 不设置< cr > 不起作用
"set noignorecase                "默认区分大小写
"set nolinebreak                 "在单词中间断行
"set scrolloff=5                 "设定光标离窗口上下边界5行时窗口自动滚动
"set showcmd                     "在状态栏显示目录所执行的指定，未完成的指令片段也会显示出来
set wrap                        "自动换行显示
set tabstop=4                   "设置tab长度为4
set softtabstop=4               "使得按退格键时可以一次删除4个空格    
set shiftwidth=4                "设定>命令移动时宽度为4
set autoindent                  "自动缩进
set ruler			            "标尺信息，显示光标在哪
"set cindent                    "C语言缩进风格
set number          			"显示行号
set backspace=indent,eol,start    "不设定的话在插入模式里无法使用退格键，delete和回车符等



"设置命令行和状态栏
set cmdheight=1                 "设定命令行的行数为1
set laststatus=2                "显示状态栏(默认值为1，无法显示状态栏)
"windows:  set statusline=%F%m%r,%Y,%{&fileformat}\\\ASCII=\%b,HEX=\%B\\\ %l,%c%V\ %p%%\\\[\%L\ lines\ in\ all\]
set statusline=%F%m%r\ ASCII=\%b,HEX=\%B,%l,%c%V\ %L-%p%%
        "设置在状态行显示的信息如下：
            "   %F              当前文件名
            "   %m              当前文件修改状态
            "   %r              当前文件是否只读
            "   %Y              当前文件类型
            "   %{&fileformat}  当前文件编码
            "   %b              当前光标处字符的ASCII码值
            "   %B              当前光标处字符的十六进制值
            "   %l              当前光标行号
            "   %c              当前光标列号
            "   %V              当前光标虚拟列号(根据字符所占字节数计算)
            "   %p              当前行占总行数的百分比
            "   %%              百分号
            "   %L              当前文件总行数

"配色方案
"colorscheme koehler             "设置配色方案

 "注释颜色
hi Comment  guifg=#999999      
"常量颜色
hi Constant guifg=#CD00CD 
"#E00CE0

"hi Identifier  guifg=#0000CD

"while for等颜色
hi Statement    guifg=#BF2624

"关键词类型颜色
hi Type        guifg=#00CD00 
"guibg=#39CB39 

"转义后字符颜色
hi Special  guifg=#FB0C4B

"include宏等的颜色
hi PreProc guifg=#0000CD 
"guibg=#0000FF

"搜索匹配的颜色 
hi Search guifg=#FFFFFF guibg=#BF2624

"guibg为背景颜色，guifg为普通字体颜色
hi Normal  guifg=#000000 guibg=#F8F8DB

"行号的颜色
hi LineNr   guifg=#BD871D

"光标的颜色
hi Cursor   guibg=#000000

"状态栏的颜色
"hi StatusLine guifg=#00FF00
"hi StatusLineNC guifg=#33FF33


""""""""""""""""""""""""""""
"Tag list (ctags)
""""""""""""""""""""""""""""
let Tlist_Ctags_Cmd='/usr/bin/ctags'  "设定ctags程序路径
let Tlist_Show_One_File=1             "不同时显示多个文件的tag，只显示当前文件的  
let Tlist_Exit_OnlyWindow=1           "如果taglist窗口是最后一个窗口，则退出vim
"let Tlist_Use_Right_Window=1          "在右侧窗口显示taglist窗口
let Tlist_Use_SingleClick=1         "单击tag就跳转
"let Tlist_Auto_Open=1               "启动VIM自动打开taglist
"let Tlist_Close_On_Select=1         "选择tag后自动关闭taglist
let Tlist_File_Fold_Auto_Close=1    "多文件时只显示当前文件的tag，其它的tag折叠
let Tlist_WinHeight=200       "taglist窗口高度
let Tlist_WinWidth=20        "taglist窗口宽度
"let Tlist_Use_Horiz_Window=1   "设置taglist窗口横向显示
"映射F8打开关闭taglist窗口
map <expr> <F8> bufloaded("__Tag_List__")?"q":":TlistOpen\<cr>"   

""""""""""""""""""""""""""""
"NERDTree
""""""""""""""""""""""""""""
"let NERDChristmasTree=1            "让Tree把自己给装饰得多姿多彩些
"let NERDTreeAutoCenter=1           "控制光标移动超过一定距离时，是否自动将焦点y调整到屏中心
"let NERDTreeAutoCenterThreshold=1  "与上面配合使用
"let NERDTreeCaseSensitiveSort=1    "排序时是否大小写敏感
"let NERDTreeHighlightCursorline=1  "是否高亮显示光标所在行
"let NERDTreeBookmarksFile='/root/vim/bookmark.txt'  "指写书签文件
let NERDTreeMouseMode=2            "指定鼠标模式：1为双击打开，3为单击打开，2为目录为单击打开，文件双击打开
"let NERDTreeQuitOnOpen=1           "打开文件后是否关闭NerdTree窗口
let NERDTreeShowBookmarks=1        "是否默认显示书签列表
let NERDTreeShowFiles=1            "是否默认显示文件
let NERDTreeShowHidden=1           "是否默认显示隐藏文件
"let NERDTreeShowLineNumbers=1      "是否默认显示行号
"let NERDTreeSortOrder=             "排序规则，这个就麻烦了，可以用正则表达式
"let NERDTreeStatusline=             "窗口状态栏
"let NERDTreeWinPos='right'          "窗口位置（left or right）
"let NERDTreeWinSize=20             "窗口宽
"映射F7打开关闭NERDTree窗口
"winnr()    获取当前窗口窗口ID
"winbufnr(winnr())   获取当前窗口的缓冲区ID
"bufname(winbufnr(winnr()))  获取当前窗口缓冲区的名字
"strpart(bufname(winbufnr(winnr())), 10)   截取从缓冲区名字第10字符开始到结束
map <expr> <F7> bufloaded("NERD_tree_".strpart(bufname(winbufnr(winnr())),10))?"q":":NERDTree\<cr>"   


""""""""""""""""""""""""""""
"MRU
""""""""""""""""""""""""""""
"let MRU_File='/root/.vim/config/_vim_mru_files'  "把记录保存在哪
"let MRU_Max_Entries=10                          "最多保存多少条记录
"let MRU_Window_Height=8                         "设置MRU窗口高度
"let MRU_Use_Current_Window=0                     "设置是否让MRU窗口独点一页
"映射F2打开和关闭MRU窗口，bufloaded是判断缓冲是否加载
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
"映射,tg执行ctags命令
nmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
vmap <silent> ,tg :!ctags -R --fields=+lS<cr><cr>
nmap ,ts :!ctags -Rn --c++-kinds=+p --fields=+ialS --extra=+q -o ~/.vim/systags /usr/include /usr/local/include<cr><cr>
set tags+=~/.vim/systags
set tags+=/usr/src/tags
set tags+=/usr/include/tags

""""""""""""""""""""""""""""
"SearchComplete
""""""""""""""""""""""""""""

"获取当前文件名
function GetFileName()
    return bufname(winbufnr(winnr()))  "获取当前窗口缓冲区的名字
endfunction

"获取当前时间，精确到分
function GetDateTime()
    return strftime("%Y-%m-%d %H:%M")
endfunction



"添加文件说明信息
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





"添加函数说明信息
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



"添加自定义代码块注释，以区别是自己添加的代码
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


"自动补全（,",{,［
""nnoremap <silent> ( i()<ESC>i
""inoremap <silent> ( ()<ESC>i

""nnoremap <silent> { i{}<ESC>i
""inoremap <silent> { {}<ESC>i

""nnoremap <silent> [ i[]<ESC>i
""inoremap <silent> [ []<ESC>i

set pastetoggle=<F>

"相当于window下的复制粘贴
"vnoremap <silent> y "+y
"vnoremap <silent> p "+p

nnoremap <C-j>  <C-W>j
nnoremap <C-k>  <C-W>k
nnoremap <C-h>  <C-W>h
nnoremap <C-l>  <C-W>l

"恢复文件关闭之前光标位置
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


"解决ctrl+]只跳转到第一个关键词问题
nnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
vnoremap <C-]> :ts <C-R>=expand("<cword>")<CR><CR>
