//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, SOJUIdentitySendToRecipient;

@protocol SOJUIdentitySendToRecipientScore <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUIdentitySendToRecipient *recipient;
@property(readonly, copy, nonatomic) NSNumber *score;
@property(readonly, copy, nonatomic) NSArray *serverSideSignals;
@end

