Thread Th_robot_retrait()
{
	void fnc_evenementielle_timerRR()
	{
		send(defaillance, x);
		exit(1);
	}
	while(1)
	{
		receive(retirer_piece_usine_du_convoyeur);
		x=sender;
		armer_timer(timer_RR, 30);
		retirer_piece_usinee_du_convoyeur();
		desarmer_timer(timer_RR);
		send(fin_retrait_piece_usinee_du_convoyeur,x);
	}
}
