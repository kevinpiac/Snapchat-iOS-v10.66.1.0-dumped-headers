//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface SCMutableCircularString : NSObject
{
    NSMutableString *_string;
    long long _start;
    long long _length;
    long long _capacity;
}

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (id)initWithCapacity:(long long)arg1;
- (long long)length;
- (id)string;

@end

