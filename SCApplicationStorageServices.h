//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCApplicationStorageServices : NSObject
{
    SCLazy *_preferences;
    SCLazy *_docObjectContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCLazy *docObjectContext; // @synthesize docObjectContext=_docObjectContext;
- (id)initWithPreferences:(id)arg1 docObjectContext:(id)arg2;
@property(readonly, nonatomic) SCLazy *preferences; // @synthesize preferences=_preferences;

@end
