//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class FBObjectiveCGraphElement, NSSet;

@interface FBNodeEnumerator : NSEnumerator
{
    NSSet *_retainedObjectsSnapshot;
    NSEnumerator *_enumerator;
    FBObjectiveCGraphElement *_object;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)nextObject;
@property(readonly, nonatomic) FBObjectiveCGraphElement *object; // @synthesize object=_object;

@end
