//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying, SCCollectionViewSection;

@interface SCSectionWithConfiguration : NSObject
{
    id <SCCollectionViewSection> _section;
    NSObject<NSCopying> *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *configuration; // @synthesize configuration=_configuration;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
@property(readonly, nonatomic) id <SCCollectionViewSection> section; // @synthesize section=_section;

@end
