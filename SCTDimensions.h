//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTDimensions : NSObject
{
    unsigned long long _type;
    unsigned long long _size;
    double *_dimensions;
}

- (struct CGSize)_iPhone7ScreenSize;
- (void)_mutateAll:(CDUnknownBlockType)arg1;
- (double)_reduce:(double)arg1 func:(CDUnknownBlockType)arg2;
- (struct CGSize)_screenSize;
- (void)dealloc;
- (id)description;
- (double)f;
- (double)first;
- (id)initWithType:(unsigned long long)arg1 dimensions:(id)arg2;
- (double)l;
- (double)last;
- (double)max;
- (double)min;
- (CDUnknownBlockType)of;
- (id)ofScreenHeight;
- (id)ofScreenWidth;
- (CDUnknownBlockType)percentOf;
- (id)percentOfIPhone7Height;
- (id)percentOfIPhone7Width;
- (CDUnknownBlockType)progress;
- (CDUnknownBlockType)updateFirst;

@end

