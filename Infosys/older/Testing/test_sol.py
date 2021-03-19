#PF-TCV-Tryout
import pytest
from solution import check_registration_number

def test_check_registration_number_1():
    result=check_registration_number(9099)
    assert result==1

def test_check_registration_number_2():
    result=check_registration_number(2007)
    assert result==1

def test_check_registration_number_3():
    result=check_registration_number(1009)
    assert result==1