//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCTAvatarFetchListener;

@protocol SCTAvatarServices <NSObject>
- (void)fetchAvatarWithUsername:(NSString *)arg1 bitmojiId:(NSString *)arg2 listener:(id <SCTAvatarFetchListener>)arg3;
@end

