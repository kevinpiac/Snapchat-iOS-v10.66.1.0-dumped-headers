//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSATouchHandlingDescriptor : NSObject
{
    struct TouchHandlingPromise _touchHandlingPromise;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTouchHandlingPromise:(struct TouchHandlingPromise)arg1;
- (_Bool)shouldAllowTouchAtNormalizedPoint:(struct CGPoint)arg1 touchTypeMask:(unsigned long long)arg2;

@end
