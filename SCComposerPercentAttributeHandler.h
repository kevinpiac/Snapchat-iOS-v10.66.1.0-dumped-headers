//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerPercentAttributeHandler-Protocol.h"

@interface SCComposerPercentAttributeHandler : NSObject <SCNComposerPercentAttributeHandler>
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _resetBlock;
}

- (void).cxx_destruct;
- (void)applyAttributePercent:(id)arg1 percentValue:(double)arg2 animator:(id)arg3;
- (void)applyAttributeRaw:(id)arg1 rawValue:(double)arg2 animator:(id)arg3;
- (id)initWithBlock:(CDUnknownBlockType)arg1 resetBlock:(CDUnknownBlockType)arg2;
- (void)resetAttribute:(id)arg1 animator:(id)arg2;

@end

