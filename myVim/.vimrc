set cursorline
set tabstop=4
set linebreak		"Переносить по словам
set wrap		"Динамический перенос длинных строк
set nocompatible	"Отключить режим совместимости с Vi
set t_Co=256		"Использовать больше цветов в терминале
"set list		"Подсвечивать табы в конце строки 

if empty(glob('~/.vim/autoload/plug.vim'))
	silent !cur1 -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
	autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

call plug#begin('~/.vim/plugged')

Plug 'fcpg/vim-orbital'
Plug 'joshdick/onedark.vim'
Plug 'rakr/vim-two-firewatch'
Plug 'ayu-theme/ayu-vim'
Plug 'ajmwagar/vim-deus'
Plug 'whatyouhide/vim-gotham'
Plug 'christophermca/meta5'
Plug 'rakr/vim-one'
Plug 'rakr/vim-colors-rakr'
Plug 'morhetz/gruvbox'
Plug 'nathanaelkane/vim-indent-guides'
Plug 'Yggdroot/indentLine'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'

call plug#end()

"set termguicolors /Яркость
"let ayucolor="dark"

"colorscheme meta5
set background=dark
colorscheme gruvbox
let g:gruvbox_contrast='soft'
let g:gruvbox_contrast_dark= 'hard'

"colorscheme gotham256
"let g:gotham_airline_emphasised_insert = 0
"let g:lightline = { 'colorscheme': 'gotham' }
"let g:lightline = { 'colorscheme': 'gotham256' }
"Airline
highlight CursorLine cterm=NONE ctermfg=NONE ctermbg=233 guifg=NONE guibg=#121212
autocmd InsertEnter * highlight CursorLine cterm=NONE ctermfg=NONE ctermbg=234 guifg=NONE guibg=#1c1c1c
autocmd InsertLeave * highlight CursorLine cterm=NONE ctermfg=NONE ctermbg=233 guifg=NONE guibg=#121212

"Plugin Indent Guides
"set ts=4 sw=4 et
"let g:indent_guides_enable_on_vim_startup = 1
"let g:indent_guides_start_level=2
"let g:indent_guides_guide_size=1

"Plugin indentLine
"let g:indentLine_seColors = 0
"let g:indentLine_color_term = 239
"let g:indentLine_char = 'c'
"let g:indentLine_setConceal = 0

"Plugin airline
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#formatter = 'default'
let g:airline_theme='gruvbox'
let g:airline#extensions#keymap#enabled = 1

