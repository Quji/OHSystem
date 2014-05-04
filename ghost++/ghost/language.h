/**
* Copyright [2013-2014] [OHsystem]
*
* We spent a lot of time writing this code, so show some respect:
* - Do not remove this copyright notice anywhere (bot, website etc.)
* - We do not provide support to those who removed copyright notice
*
* OHSystem is free software: You can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* You can contact the developers on: admin@ohsystem.net
* or join us directly here: http://ohsystem.net/forum/
*
* Visit us also on http://ohsystem.net/ and keep track always of the latest
* features and changes.
*
*
* This is modified from GHOST++: http://ghostplusplus.googlecode.com/
* Official GhostPP-Forum: http://ghostpp.com/
*/

#ifndef LANGUAGE_H
#define LANGUAGE_H

//
// CLanguage
//

class CLanguage
{
private:
    CConfig *m_CFG;

public:
    CLanguage( string nCFGFile );
    ~CLanguage( );

    string UnableToCreateGameTryAnotherName( string server, string gamename );
    string UserIsAlreadyAnAdmin( string server, string user );
    string AddedUserToAdminDatabase( string server, string user );
    string ErrorAddingUserToAdminDatabase( string server, string user );
    string YouDontHaveAccessToThatCommand( );
    string UserIsAlreadyBanned( string server, string victim );
    string BannedUser( string server, string victim );
    string ErrorBanningUser( string server, string victim );
    string UserIsAnAdmin( string server, string user );
    string UserIsNotAnAdmin( string server, string user );
    string UserWasBannedOnByBecause( string server, string victim, string date, string admin, string reason, string expire, string remain );
    string UserIsNotBanned( string server, string victim );
    string ThereAreNoAdmins( string server );
    string ThereIsAdmin( string server );
    string ThereAreAdmins( string server, string count );
    string ThereAreNoBannedUsers( string server );
    string ThereIsBannedUser( string server );
    string ThereAreBannedUsers( string server, string count );
    string YouCantDeleteTheRootAdmin( );
    string DeletedUserFromAdminDatabase( string server, string user );
    string ErrorDeletingUserFromAdminDatabase( string server, string user );
    string UnbannedUser( string victim );
    string ErrorUnbanningUser( string victim );
    string GameNumberIs( string number, string description );
    string GameNumberDoesntExist( string number );
    string GameIsInTheLobby( string description, string current, string max );
    string ThereIsNoGameInTheLobby( string current, string max );
    string UnableToLoadConfigFilesOutside( );
    string LoadingConfigFile( string file );
    string UnableToLoadConfigFileDoesntExist( string file );
    string CreatingPrivateGame( string gamename, string user );
    string CreatingPublicGame( string gamename, string user );
    string UnableToUnhostGameCountdownStarted( string description );
    string UnhostingGame( string description );
    string UnableToUnhostGameNoGameInLobby( );
    string VersionAdmin( string version );
    string VersionNotAdmin( string version );
    string UnableToCreateGameAnotherGameInLobby( string gamename, string description );
    string UnableToCreateGameMaxGamesReached( string gamename, string max );
    string GameIsOver( string description );
    string SpoofCheckByReplying( );
    string GameRefreshed( );
    string SpoofPossibleIsAway( string user );
    string SpoofPossibleIsUnavailable( string user );
    string SpoofPossibleIsRefusingMessages( string user );
    string SpoofDetectedIsNotInGame( string user );
    string SpoofDetectedIsInPrivateChannel( string user );
    string SpoofDetectedIsInAnotherGame( string user );
    string CountDownAborted( );
    string TryingToJoinTheGameButBanned( string victim );
    string UnableToBanNoMatchesFound( string victim );
    string PlayerWasBannedByPlayer( string server, string victim, string user );
    string UnableToBanFoundMoreThanOneMatch( string victim );
    string AddedPlayerToTheHoldList( string user );
    string UnableToKickNoMatchesFound( string victim );
    string UnableToKickFoundMoreThanOneMatch( string victim );
    string SettingLatencyToMinimum( string min );
    string SettingLatencyToMaximum( string max );
    string SettingLatencyTo( string latency );
    string KickingPlayersWithPingsGreaterThan( string total, string ping );
    string HasPlayedGamesWithThisBot( string user, string score, string games, string winperc, string streak, string month, string year );
    string HasntPlayedGamesWithThisBot( string user, string month, string year );
    string AutokickingPlayerForExcessivePing( string victim, string ping );
    string SpoofCheckAcceptedFor( string server, string user );
    string PlayersNotYetSpoofChecked( string notspoofchecked );
    string ManuallySpoofCheckByWhispering( string hostname );
    string SpoofCheckByWhispering( string hostname );
    string EveryoneHasBeenSpoofChecked( );
    string PlayersNotYetPinged( string notpinged );
    string EveryoneHasBeenPinged( );
    string ShortestLoadByPlayer( string user, string loadingtime );
    string LongestLoadByPlayer( string user, string loadingtime );
    string YourLoadingTimeWas( string loadingtime );
    string HasPlayedAliasGamesWithThisBot( string totalgames, string totalwins, string totallosses, string draws, string totalkills, string totaldeaths, string totalcreepkills, string totalcreepdenies, string totalassists, string totalneutralkills, string totaltowerkills, string totalraxkills, string avgkills, string avgdeaths, string avgcreepkills, string avgcreepdenies, string avgassists, string avgneutralkills, string avgtowerkills, string avgraxkills );
    string HasPlayedAliasGamesWithThisBot2( string name, string totalgames, string totalwins, string totallosses, string draws, string totalkills, string totaldeaths, string totalcreepkills, string totalcreepdenies, string totalassists, string totalneutralkills, string totaltowerkills, string totalraxkills, string avgkills, string avgdeaths, string avgcreepkills, string avgcreepdenies, string avgassists, string avgneutralkills, string avgtowerkills, string avgraxkills, string month, string year, string alias );
    string HasntPlayedAliasGamesWithThisBot( string user, string month, string year, string gamealias );
    string WasKickedForReservedPlayer( string reserved );
    string WasKickedForOwnerPlayer( string owner );
    string WasKickedByPlayer( string user );
    string HasLostConnectionPlayerError( string error );
    string HasLostConnectionSocketError( string error );
    string HasLostConnectionClosedByRemoteHost( );
    string HasLeftVoluntarily( );
    string EndingGame( string description );
    string HasLostConnectionTimedOut( );
    string GlobalChatMuted( );
    string GlobalChatUnmuted( );
    string ShufflingPlayers( );
    string UnableToLoadConfigFileGameInLobby( );
    string PlayersStillDownloading( string stilldownloading );
    string RefreshMessagesEnabled( );
    string RefreshMessagesDisabled( );
    string AtLeastOneGameActiveUseForceToShutdown( );
    string CurrentlyLoadedMapCFGIs( string mapcfg );
    string LaggedOutDroppedByAdmin( );
    string LaggedOutDroppedByVote( );
    string PlayerVotedToDropLaggers( string user );
    string LatencyIs( string latency );
    string SyncLimitIs( string synclimit );
    string SettingSyncLimitToMinimum( string min );
    string SettingSyncLimitToMaximum( string max );
    string SettingSyncLimitTo( string synclimit );
    string UnableToCreateGameNotLoggedIn( string gamename );
    string AdminLoggedIn( );
    string AdminInvalidPassword( string attempt );
    string ConnectingToBNET( string server );
    string ConnectedToBNET( string server );
    string DisconnectedFromBNET( string server );
    string LoggedInToBNET( string server );
    string BNETGameHostingSucceeded( string server );
    string BNETGameHostingFailed( string server, string gamename );
    string ConnectingToBNETTimedOut( string server );
    string PlayerDownloadedTheMap( string user, string seconds, string rate );
    string UnableToCreateGameNameTooLong( string gamename );
    string SettingGameOwnerTo( string owner );
    string TheGameIsLocked( );
    string GameLocked( );
    string GameUnlocked( );
    string UnableToStartDownloadNoMatchesFound( string victim );
    string UnableToStartDownloadFoundMoreThanOneMatch( string victim );
    string UnableToSetGameOwner( string owner );
    string UnableToCheckPlayerNoMatchesFound( string victim );
    string CheckedPlayer( string victim, string ping, string from, string admin, string owner, string spoofed, string spoofedrealm, string reserved );
    string UnableToCheckPlayerFoundMoreThanOneMatch( string victim );
    string TheGameIsLockedBNET( );
    string UnableToCreateGameDisabled( string gamename );
    string BotDisabled( );
    string BotEnabled( );
    string UnableToCreateGameInvalidMap( string gamename );
    string WaitingForPlayersBeforeAutoStart( string players, string playersleft );
    string AutoStartDisabled( );
    string AutoStartEnabled( string players );
    string AnnounceMessageEnabled( );
    string AnnounceMessageDisabled( );
    string AutoHostEnabled( );
    string AutoHostDisabled( );
    string UnableToLoadSaveGamesOutside( );
    string UnableToLoadSaveGameGameInLobby( );
    string LoadingSaveGame( string file );
    string UnableToLoadSaveGameDoesntExist( string file );
    string UnableToCreateGameInvalidSaveGame( string gamename );
    string UnableToCreateGameSaveGameMapMismatch( string gamename );
    string AutoSaveEnabled( );
    string AutoSaveDisabled( );
    string DesyncDetected( );
    string UnableToMuteNoMatchesFound( string victim );
    string MutedPlayer( string victim, string user );
    string UnmutedPlayer( string victim, string user );
    string UnableToMuteFoundMoreThanOneMatch( string victim );
    string PlayerIsSavingTheGame( string player );
    string UpdatingClanList( );
    string UpdatingFriendsList( );
    string MultipleIPAddressUsageDetected( string player, string others );
    string UnableToVoteKickAlreadyInProgress( );
    string UnableToVoteKickNotEnoughPlayers( );
    string UnableToVoteKickNoMatchesFound( string victim );
    string UnableToVoteKickPlayerIsReserved( string victim );
    string StartedVoteKick( string victim, string user, string votesneeded );
    string UnableToVoteKickFoundMoreThanOneMatch( string victim );
    string VoteKickPassed( string victim );
    string ErrorVoteKickingPlayer( string victim );
    string VoteKickAcceptedNeedMoreVotes( string victim, string user, string votes );
    string VoteKickCancelled( string victim );
    string VoteKickExpired( string victim );
    string WasKickedByVote( );
    string TypeYesToVote( string commandtrigger );
    string PlayersNotYetPingedAutoStart( string notpinged );
    string WasKickedForNotSpoofChecking( );
    string WasKickedForHavingFurthestScore( string score, string average );
    string PlayerHasScore( string player, string score );
    string RatedPlayersSpread( string rated, string total, string spread );
    string ErrorListingMaps( );
    string FoundMaps( string maps );
    string NoMapsFound( );
    string ErrorListingMapConfigs( );
    string FoundMapConfigs( string mapconfigs );
    string NoMapConfigsFound( );
    string PlayerFinishedLoading( string user );
    string PleaseWaitPlayersStillLoading( );
    string MapDownloadsDisabled( );
    string MapDownloadsEnabled( );
    string MapDownloadsConditional( );
    string SettingHCL( string HCL );
    string UnableToSetHCLInvalid( );
    string UnableToSetHCLTooLong( );
    string TheHCLIs( string HCL );
    string TheHCLIsTooLongUseForceToStart( );
    string ClearingHCL( );
    string TryingToRehostAsPrivateGame( string gamename );
    string TryingToRehostAsPublicGame( string gamename );
    string RehostWasSuccessful( );
    string TryingToJoinTheGameButBannedByName( string victim );
    string TryingToJoinTheGameButBannedByIP( string victim, string ip, string bannedname );
    string HasBannedName( string victim );
    string HasBannedIP( string victim, string ip, string bannedname );
    string PlayersInGameState( string number, string players );
    string ValidServers( string servers );
    string TeamCombinedScore( string team, string score );
    string BalancingSlotsCompleted( );
    string PlayerWasKickedForFurthestScore( string name, string score, string average );
    string LocalAdminMessagesEnabled( );
    string LocalAdminMessagesDisabled( );
    string WasDroppedDesync( );
    string WasKickedForHavingLowestScore( string score );
    string PlayerWasKickedForLowestScore( string name, string score );
    string ReloadingConfigurationFiles( );
    string CountDownAbortedSomeoneLeftRecently( );
    string UnableToCreateGameMustEnforceFirst( string gamename );
    string UnableToLoadReplaysOutside( );
    string LoadingReplay( string file );
    string UnableToLoadReplayDoesntExist( string file );
    string CommandTrigger( string trigger );
    string CantEndGameOwnerIsStillPlaying( string owner );
    string CantUnhostGameOwnerIsPresent( string owner );
    string WasAutomaticallyDroppedAfterSeconds( string seconds );
    string HasLostConnectionTimedOutGProxy( );
    string HasLostConnectionSocketErrorGProxy( string error );
    string HasLostConnectionClosedByRemoteHostGProxy( );
    string WaitForReconnectSecondsRemain( string seconds );
    string WasUnrecoverablyDroppedFromGProxy( );
    string PlayerReconnectedWithGProxy( string name );

    //OH Lang CFG
    string WrongContactBotOwner( );
    string RanksNotLoaded( );
    string SuccessfullyRegistered( );
    string SuccessfullyConfirmedAccount( );
    string WrongPassword( );
    string WrongEMail( );
    string NameAlreadyUsed( );
    string NoAccountToConfirm( );
    string BetPoints( string user, string points );
    string SuccessfullyResetedStats( string user );
    string NoRecordFoundForUser( string user );
    string SuccessfullyStoredMessage( );
    string NewMessages( string user, string amount );
    string ErrorInboxEmpty( );
    string SuccessfullyTypedPassword( string user );
    string UserGotPenalityPoints( string user, string amount );
    string UserGotNoPenalityPoints( string user );
    string AddedPenalityPoints( string user, string admin, string amount );
    string BannedUserForReachingTooManyPPoints( string user );
    string FailedToAddPPoint();
    string NotIPBanned();
    string FoundIPBans( string result );
    string ErrorBanningUserAlreadyPermBanned( string user );
    string ErrorBanningUserAlreadyLongerBanned( string user );
    string SuccessfullyBannedUser( string user, string server );
    string SuccessfullyUpdatedBannedUser( string user, string server );
    string SuccessfullyPermBannedUser( string user, string server );
    string ChangedRankOfUser( string user, string levelname, string server );
    string UserHasAHiddenAcc( string user );
    string RankOfUser( string user, string time, string alias, string rank, string level, string levelname );
    string RankOfUserWithoutLevel( string user, string time, string alias, string rank);
    string StreakOfUser( string user, string time, string alias, string streak, string maxstreak, string maxlstreak);
    string UserMutedByRCON( string user, string admin );
    string UserUnMutedByRCON( string user, string admin );
    string UserKickedByRCON( string user, string admin );
    string InvalidName( );
    string WrongInputUseALevel( );
    string WrongInputInvalidLevel( );
    string UserLevelCheck( string user, string level );
    string InvalidNameTooShort( );
    string NoPermissionToExecCommand( );
    string TooMuchPPoints( );
    string ErrorMissingReason( );
    string ErrorBadInput( );
    string BannedIPRange( string ip, string server );
    string ErrorBanningWrongSuffix( string suffix );
    string CheckBanTempUser( string user, string date, string expire, string remain, string reason );
    string CheckBanPermUser( string user, string date, string reason );
    string CheckBanNameBan( );
    string ChangedStatusForVIPGames( string type );
    string WrongOptionUserOnOff( );
    string ChangedMinPlayedGames( string type, string limit );
    string ErrorWrongInputForSayPlayer( );
    string ErrorWrongInputForMessage( );
    string ErrorMessageTooShort( );
    string ErrorRegisterAbusePrevention( );
    string WrongRegisterCommand( string command );
    string WrongPassRegisterCommand( string pass );
    string PassTooShortRegisterCommand( string pass );
    string InvalidEmailRegisterCommand( string mail);
    string ErrorWhispRegister( );
    string NoMapAliasRecordFound( );
    string PassProtAcc( );
    string RemovedPassProtAcc( );
    string NoPassProtAcc( );
    string CurrentPoints( string user, string points);
    string ErrorAlreadyBet( );
    string UserBet( string user, string amount);
    string BetATooHighAmount( string result);
    string RemovingPlayerNotifyFF( string team );
    string WaitForProperStatsSafe( );
    string GameWillEndInTen( );
    string WinnerSetTo( string team);
    string AutoEndSpreadInterruptNotify( string seconds, string votes );
    string VoteModeExpired( );
    string AbsoluteVoteChoosen( string mode );
    string AbsoluteVoteChoosenRandom( string mode );
    string TopVoteChoosenRandom( string mode );
    string UserMayBanned( string user );
    string AutoEndHighSpread( string spread );
    string AutoEndTooFewPlayers( );
    string AutoEndToDraw( );
    string AutoEndOneTeamRemain( );
    string AutoEndSpreadNotify( string team, string votes );
    string AutoEndEarlyDrawOne( );
    string AutoEndEarlyDrawTwo( );
    string AutoEndEarlyDrawThree( );
    string FoundNoMatchWithPlayername( );
    string SuccessfullyLetPlayerInsult( );
    string FoundMultiplyMatches( );
    string MessageTooLongChooseAMoreShorten( );
    string DisallowedOnlyCountryCheckNotify( );
    string DisallowedUnallowedCountryCheckNotify( );
    string ErrorCountryDenyListIsntCleared( );
    string ErrorCountryOnlyListIsntCleared( );
    string EnabledDeniedOrLimitedCountries( string type, string countries );
    string CountryKickExceptionPlayer( string user, string cc, string type, string levelname);
    string KickedPlayerForDeniedCountry( string user);
    string DeniedGarenaKickNotify( );
    string KickedPlayerForDeniedGarena( string user);
    string DeniedUser( string user);
    string GaveTheThing( string player, string user );
    string MutedAllChatOfUser( string user, string admin);
    string UnMutedAllChatOfUser( string user, string admin);
    string SetWinnerByUser( string user, string team);
    string UserAlreadyVotedForFF( );
    string UserAlreadyVotedForDraw( );
    string DisplayIgnoredPlayersForUser( string ignored );
    string AlreadyMarkedAsAFK( );
    string AlreadyMarkedAsFeeder( );
    string AlreadyMarkedAsFullFeeder( );
    string AlreadyMarkedXTimesWithHighPing( string times);
    string DidNotFoundAlias( string alias );
    string UsingDefaultAlias( string alias );
    string CurrentVoteKickProcessUser( string user );
    string CurrentVoteKickRunTime( string runtime, string timeleft );
    string NotifyForAbusiveVotekick( );
    string NotifyForCustomVotekickReason( );
    string VoteKickedUserWhoWasntMarkedAsFeeder( string user );
    string VoteKickFeederAbuseReason( );
    string VoteKickedUserWhoWasMarkedAsFeederLevelOne( string user );
    string ReminederForVotekickAFeederLevelOne( );
    string VoteKickNotPossiblePlayerIsInAnotherTeam( string user );
    string UnableToVotekickYourself( );
    string UnableToVoteStartMissingPlayers( string players );
    string UnableToVoteStartMissingVotesd( string votes );
    string SuccessfullyVoteStarted( );
    string UnableToVoteStartOwnerInGame( );
    string UnableToVoteKickNotUsersTeam( );
    string UserVotedForDraw( string user, string votes );
    string UndrawNotify( );
    string UserRecalledDrawVote( string user );
    string ObserverTriesToDraw( );
    string RemainFFTime( string remain );
    string TeamForfeited( string team );
    string StayToSafeStats( );
    string UserForfeitedGame( string user );
    string UserForfeitedGameNotify( string team, string votes, string votesneeded );
    string NoOneHasForfeitedYet( );
    string ErrorForfeitingNoTwoTeamMap( );
    string UserWillObserveGame( string user );
    string ErrorObserverGameAlreadyObserver( );
    string UserWillNoLongerObserveGame( string user );
    string ErrorRemovingPassProtectionInvalidOption( );
    string ErrorBetInvalidAmount( );
    string ErrorBetInvalidLogicalAmount( );
    string ErrorBetAlreadyTooLate( );
    string UserRequestedToPauseGame( string user );
    string GamePauseNotify( );
    string ErrorPausingAlreadyRequested( );
    string UserRequestedToUnPauseGame( string user );
    string ErrorUnPausingGameIsntPaused( );
    string ErrorOneTeamHasNoPlayers( );
    string ErrorNotATwoTeamMap( );
    string UserAteACookie( string user );
    string UserRemovedCookieNotify( string user );
    string ErrorEatACookieNoCookieAvaible( );
    string UserIgnoredPlayer( string user );
    string UserUnIgnoredPlayer( string user );
    string UserIgnoringAllPlayersNotify( );
    string UserUnIgnoringAllPlayersNotify( );
    string RuleTagNotify( );
    string UserStartedVoteMute( string user, string target );
    string UserStartedVoteMuteVotesNeeded( string team, string votes );
    string UserStartedVoteMuteVoteExpire( string expire );
    string UserStartedVoteGlobalMute( string user, string target );
    string UserStartedVoteGlobalMuteVotesNeeded( );
    string UserStartedVoteNotify( );
    string SuccessfullyVoteMutedUser( string user );
    string UserVotedForMute( string user, string target, string votes );
    string UserVotedToModeNoVotesOnTeam( );
    string UserVotedToModeNoVotesOnObserver( );
    string ErrorVotingThereIsNoVote( );
    string SuccessfullyInterruptedAutoEnd( );
    string UserVotedForInterruptAutoEnd( string user, string votes );
    string UserAlreadyVotedForIntteruptAutoEnd( );
    string ErrorVotedAlreadyForMode( );
    string ErrorInvalidModeWasVoted( );
    string UserVotedForMode( string user, string mode );
    string PlayersWhoDidntVoteForMode( string players );
    string NoUserDefined( );
    string UserForcedMode( string user, string mode );
    string UserRefilledCookieChar( string user, string player );
    string EnabledAutobalance( );
    string DisabledAutobalance( );
    string UserEnabledNoLag( string user );
    string UserDisabledNoLag( string user );
    string UserVotedForBalance( string user );
    string EnabledBalanceForThisGame( );
    string ErrorVotedAlreadyForBalance( );
    string UsersReputation( string user, string reputation );
    string UsersOwnReputation( string reputation );
    string WelcomeUserCreateUniqueId( string user );
    string DomainOnJoinNotify( );
    string WelcomeBackUser( string user, string ping );
    string CreatedUniqueIdForNewUser( string id );
    string PotentialBanAvoider( string user, string count );
    string KickedUserForBeingAFK( string user );
    string WarnedUserForBeingAFK( string user );
    string KickedUserForBeingAfk( string user );
    string ErrorForAPMAFKSystem( );
    string UserHasBeenMarkedAPMAFK( string user, string apm );
    string UserWarningAPMAFK( string min, string warns );
    string VoteStartExpired( );
    string VoteMuteExpired( string user );
    string GameWillBePausedInTicks( string ticks );
    string GameWillBeResumedInTicks( string ticks );
    string GameWillBeUnpauseInTenSeconds( );
    string UserHaveAHighPingMark( string ping, string times);
    string UserCanLeaveBecauseHighPing( );
    string UserCanLeaveBecausePing( string user );
    string UserTriedToPause( string user );
    string UserTriedToPauseWarnng( );
    string UserGorPunishedForPausing( string user );
    string UserGorPunishedForSaving( string user );
    string VoteHasBeenEnabledNotify( );
    string VoteStartIsEnabledVotesRequired( string votes );
    string UserWasKickedForJoiningFromGarena( string user );
    string UserJoinedFromGarena( string rank, string user, string realm, string room );
    string UserJoined( string rank, string user, string realm);
    string UserJoinedWithHighLeaveRate( string user, string perc);
    string PreventUserFromTransferResources( string user );
    string Balance( string sent, string scou);
    string SpreadWithLockedPlayers( string spread, string locked);
    string WinChance( string sent, string scou);
    string YouHaventVotedYet( );
    string PlayersNotVerifiedYet( );
    string PlayersNotVotedYet( );
    string TimeLeftBeforeRandomMode( string left );
    string TimeLeftBeforeTopVotedMode( string left );
    string VoteModeHasStarted( );
    string UserKickedAPMAFK( string user, string apm, string times, string min );
    string UserUsed1( string user, string thing);
    string UserUsed2( string user, string thing);
    string UserUsed3( string user, string thing);
    string UserUsed4( string user, string thing);
    string UserUsed5( string user, string thing);
    string UserUsed6( string user, string thing);
    string UserWasKickedForSlowDownloadRate( string user );
    string UserWasAutomaticallyUnmuted( );
    string SpamWarning( );
    string UserWasMutedForReason( string user, string reason);
    string SpamWarning2( );
    string UserIgnoerNotify( string user );
    string FlameWarn( );
    string FlameWarn2( );
    string FlameWarn3( );
};

#endif
