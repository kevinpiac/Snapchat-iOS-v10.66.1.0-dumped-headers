//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCStoryReadReceiptParameters : NSObject
{
    _Bool _saved;
    _Bool _isPublicStory;
    _Bool _isOfficialStory;
    _Bool _isFriend;
    NSString *_storyId;
    NSString *_flushableStoryId;
    NSDate *_viewedTimestamp;
    long long _screenshotCount;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) _Bool isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
@property(nonatomic) _Bool isPublicStory; // @synthesize isPublicStory=_isPublicStory;
- (id)jsonRepresentationWithIdKey:(id)arg1 idValue:(id)arg2;
@property(nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(nonatomic) long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;

@end

