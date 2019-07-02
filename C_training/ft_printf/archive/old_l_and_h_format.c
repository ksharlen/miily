void		ft_l_format(const char *format)
{
		if ((*(++format) == 'l'))
		{
				g_spec.shift_spec += 2;
				g_spec.size_type = "ll";
		}
		else
		{
			g_spec.shift_spec += 1;
			g_spec.size_type = "l";
		}
}

void		ft_h_format(const char *format)
{
		if ((*(++format) == 'h'))
		{
				g_spec.shift_spec += 2;
				g_spec.size_type = "hh";
		}
		else
		{
			g_spec.shift_spec += 1;
			g_spec.size_type = "h";
		}
}