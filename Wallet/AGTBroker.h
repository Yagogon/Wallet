//
//  AGTBroker.h
//  Wallet
//
//  Created by Yago de la Fuente on 4/6/15.
//  Copyright (c) 2015 cinnika. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGTMoney.h"

@interface AGTBroker : NSObject

@property (strong, nonatomic) NSMutableDictionary *rates;

-(id<AGTMoney>) reduce: (id<AGTMoney>) money toCurrency: (NSString *) currency;

-(void) addRate: (NSInteger) rate
   fromCurrency: (NSString *) fromCurrency
     toCurrency: (NSString *) toCurrency;

-(NSString *) keyFromCurrency: (NSString *) fromCurrency toCurrency: (NSString *) toCurrency;

@end
