Thread Th_Robot_alimentation ()
{
	void fnc_evenementielle_timerRA()
	{
		send(defaillance,x);
		exit(1);
	}
	while(1)
	{
		receive(deposer_piec"_brute_sur_convoyeur);
		x=Sender;
		armer_timer(timer_Ra, 20)
		deposer_piece_brute();
		send(fin_depot_piece_brute_sur_convoyeur, x);
	}
}
