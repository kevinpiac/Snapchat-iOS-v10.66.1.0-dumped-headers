//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor;
@protocol SCCognacGroupParticipant;

@protocol SCCognacGroup <NSObject>
- (UIColor *)colorForUserId:(NSString *)arg1;
- (NSString *)defaultDisplayName;
- (NSString *)groupId;
- (_Bool)hasDisplay;
- (NSArray *)orderedParticipants;
- (id <SCCognacGroupParticipant>)participantForUsername:(NSString *)arg1;
- (NSArray *)participantsWithoutSelf;
@end

