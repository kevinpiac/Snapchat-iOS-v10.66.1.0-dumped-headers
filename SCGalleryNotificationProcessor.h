//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProcessor-Protocol.h"

@class SCUserSession;

@interface SCGalleryNotificationProcessor : NSObject <SCAppNotificationProcessor>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (void)processNotification:(id)arg1;
- (long long)shouldFilterNotification:(id)arg1;

@end

