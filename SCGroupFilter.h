//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SCGroupFilter : NSObject
{
    NSMutableArray *_baseFilterGroup;
    NSArray *_filterGroup;
}

- (void).cxx_destruct;
- (id)filter:(id)arg1;
@property(retain, nonatomic) NSArray *filterGroup; // @synthesize filterGroup=_filterGroup;
- (id)filterQueries:(id)arg1;
- (id)initWithFilterGroup:(id)arg1;

@end
