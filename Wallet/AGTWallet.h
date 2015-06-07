//
//  AGTWallet.h
//  Wallet
//
//  Created by Yago de la Fuente on 4/6/15.
//  Copyright (c) 2015 cinnika. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AGTMoney.h"

@interface AGTWallet : NSObject<AGTMoney>

@property (nonatomic, readonly) NSUInteger eurosCount;
@property (nonatomic, readonly) NSUInteger dollarCount;
@property (nonatomic, readonly) NSUInteger currenciesCount;

-(AGTMoney *) euroAtIndex: (NSUInteger) index;

-(AGTMoney *) dollarAtIndex: (NSUInteger) index;

-(NSUInteger) totalEurosValue;

-(NSUInteger) totalDollarsValue;

@end
