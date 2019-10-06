//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCTCallingController, SCTPresenceController;

@protocol SCTalkSession <NSObject>
- (_Bool)TECHDEBT_callInProgress;
- (_Bool)TECHDEBT_expandedLocalMediaMode;
- (void)activate;
- (void)background;
- (id <SCTCallingController>)callingController;
- (NSString *)convoId;
- (void)deactivate;
- (id <SCTPresenceController>)presenceController;
- (void)processTypingActivity:(unsigned long long)arg1;
- (void)refreshParticipants;
- (void)setCellViewPosition:(long long)arg1;
- (void)setChatSource:(long long)arg1;
@end
