//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCancelable-Protocol.h"
#import "SCCanceling-Protocol.h"

@class NSString;

@protocol SCSIBackendRequest <SCCanceling, SCCancelable>
@property(readonly, nonatomic) NSString *requestKey;
@end

