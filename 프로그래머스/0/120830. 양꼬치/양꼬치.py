def solution(n, k):
    price = n * 12000
    
    service_drinks = n // 10
    
    drink_price = (k - service_drinks) * 2000
    
    return price + drink_price