//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerContentCallback-Protocol.h"

@interface SCContentCallback : NSObject <SCNContentManagerContentCallback>
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)handleContentResult:(id)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

@end
