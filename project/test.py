import backtest

trades = [100, -50, 200, -30]
initial_cash = 1000.0

final_cash = backtest.backtest(trades, initial_cash)
print(f"Final cash: {final_cash}")
