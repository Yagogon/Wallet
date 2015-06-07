//
//  AGTWalletTableViewController.h
//  Wallet
//
//  Created by Yago de la Fuente on 5/6/15.
//  Copyright (c) 2015 cinnika. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AGTWallet;
@class AGTBroker;

@interface AGTWalletTableViewController : UITableViewController

-(id) initWithModel: (AGTWallet *) wallet broker: (AGTBroker *) broker;

@end
