#include "gmock/gmock.h"
#include "FizzBuzzer.h"

using namespace testing;

TEST( FizzBuzzer, OneIsDigit ){
    FizzBuzzer f(1,1);
    ASSERT_THAT( f.hasNextString(), Eq(true) );
    ASSERT_THAT( f.getNextString(), Eq("1") );
}
//TODO Next tests

bool FizzBuzzer_test_ThreeIsFizz(){
	FizzBuzzer f(3,3);

	if ( f.hasNextString() &&
		("Fizz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_FiveIsBuzz(){
	FizzBuzzer f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_FifteenIsFizzBuzz(){
	FizzBuzzer f(15,15);

	if ( f.hasNextString() &&
		("FizzBuzz" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_EmptyRange(){
	FizzBuzzer f(2,1);

	if ( !f.hasNextString() &&
		("" == f.getNextString()))
	{
		return true;
	}

	return false;
}

bool FizzBuzzer_test_ResetResets(){
	FizzBuzzer f(5,5);

	if ( f.hasNextString() &&
		("Buzz" == f.getNextString()) &&
		 !f.hasNextString() )
	{
		f.reset();
		if ( f.hasNextString() &&
		   ("Buzz" == f.getNextString()))
		   return true;
	}

	return false;
}

bool FizzBuzzer_test_SanityTest(){
	FizzBuzzer f;

	if (f.hasNextString())
	{
		return true;
	}

	return false;
}
