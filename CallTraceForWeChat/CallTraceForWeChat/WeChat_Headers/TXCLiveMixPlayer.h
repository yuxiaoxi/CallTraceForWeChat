//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXIAudioPlayDelegate-Protocol.h"

@class NSString, TXCAudioReader, TXCBGMPlayer, TXSAudioPacket;
@protocol TXIMixPlayDelegate;

@interface TXCLiveMixPlayer : NSObject <TXIAudioPlayDelegate>
{
    TXCBGMPlayer *_player;
    TXCAudioReader *_audioReader;
    float _curMixAudioDuration;
    unsigned long long _hasPlayLen;
    unsigned long long _preHasPlayLen;
    unsigned long long _progressNotifyFreq;
    unsigned long long _hasReadLen;
    int _srcTrack;
    int _desTrack;
    TXSAudioPacket *_desAudioInfo;
    _Bool _isPlayMix;
    float _startTime;
    _Bool _hasFinishRead;
    _Bool _playFirstFrame;
    unsigned long long _hasMixLen;
    float _playProgress;
    struct TXCMutex _readerMutex;
    struct TXCResampleMixer _effector;
    struct TXCMutex _effectMutex;
    struct TXCMutex _pitchMutex;
    struct TXCAudioSpeeder *_pitcher;
    float _musicDuration;
    _Bool _isStart;
    _Bool _isPause;
    float _desVolume;
    float _srcVolume;
    float _desPitch;
    id <TXIMixPlayDelegate> _delegate;
    NSString *_filePath;
    CDUnknownBlockType _beginNotify;
    CDUnknownBlockType _progressNotify;
    CDUnknownBlockType _completeNotify;
}

@property(copy) CDUnknownBlockType completeNotify; // @synthesize completeNotify=_completeNotify;
@property(copy) CDUnknownBlockType progressNotify; // @synthesize progressNotify=_progressNotify;
@property(copy) CDUnknownBlockType beginNotify; // @synthesize beginNotify=_beginNotify;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) float desPitch; // @synthesize desPitch=_desPitch;
@property(nonatomic) float srcVolume; // @synthesize srcVolume=_srcVolume;
@property(nonatomic) float desVolume; // @synthesize desVolume=_desVolume;
@property(readonly, nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) __weak id <TXIMixPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearMixCache;
- (void)onPlayPcmData:(id)arg1;
- (float)getCurMixProgress;
- (float)getMixAudioDuration:(id)arg1;
- (struct AudioBuffer)getAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)mixData:(char *)arg1 withLen:(int)arg2;
- (_Bool)seekFile:(float)arg1 to:(float)arg2;
- (_Bool)resetFile:(id)arg1 from:(float)arg2 to:(float)arg3;
- (_Bool)readAudioFromFile:(float)arg1 toTime:(float)arg2;
- (_Bool)resumeMixPlay;
- (_Bool)pauseMixPlay;
- (_Bool)stopMixPlay;
- (_Bool)setDelegateBlock:(CDUnknownBlockType)arg1 withProgressNotify:(CDUnknownBlockType)arg2 andCompleteNotify:(CDUnknownBlockType)arg3;
- (_Bool)startMixPlayForFile:(id)arg1 withDesInfo:(id)arg2 from:(float)arg3 to:(float)arg4 playMix:(_Bool)arg5;
- (id)initPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

