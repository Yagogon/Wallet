//
//  AGTMoney.h
//  Wallet
//
//  Created by Yago de la Fuente on 1/6/15.
//  Copyright (c) 2015 cinnika. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AGTMoney;
@class AGTBroker;

@protocol AGTMoney <NSObject>

-(id) initWithAmount:(NSInteger) amount
            currency: (NSString *) currency;

-(id<AGTMoney>) times: (NSInteger) multiplier;

-(id<AGTMoney>) plus: (AGTMoney *) other;

-(id<AGTMoney>) reduceToCurrency: (NSString *) currency withBroker: (AGTBroker *) broker;

@end

@interface AGTMoney : NSObject<AGTMoney>

@property (copy, readonly, nonatomic) NSString *currency;
@property (strong, nonatomic, readonly) NSNumber *amount;

+(instancetype) dollarWithAmount: (NSInteger) amount;

+(instancetype) euroWitAmount: (NSInteger) amount;



@end
