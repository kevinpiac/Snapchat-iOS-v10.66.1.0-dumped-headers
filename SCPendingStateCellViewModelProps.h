//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseChatCellViewModelProps.h"

@class NSString;

@interface SCPendingStateCellViewModelProps : SCBaseChatCellViewModelProps
{
    NSString *_recipient;
    long long _pendingSnapNum;
    long long _pendingChatNum;
}

- (void).cxx_destruct;
@property(nonatomic) long long pendingChatNum; // @synthesize pendingChatNum=_pendingChatNum;
@property(nonatomic) long long pendingSnapNum; // @synthesize pendingSnapNum=_pendingSnapNum;
@property(copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;

@end
