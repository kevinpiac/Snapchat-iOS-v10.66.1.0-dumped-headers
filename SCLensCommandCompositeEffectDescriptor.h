//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSSet;

@interface SCLensCommandCompositeEffectDescriptor : NSObject <NSCopying>
{
    NSArray *_descriptors;
    NSSet *_rectangles;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
- (unsigned long long)hash;
- (id)initWithDescriptors:(id)arg1 rectangles:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *rectangles; // @synthesize rectangles=_rectangles;

@end

