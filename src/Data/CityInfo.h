#ifndef DATA_CITYINFO_H
#define DATA_CITYINFO_H

#include <stdint.h>

extern struct _Data_CityInfo {
	int8_t __unknown_00a5;
	int32_t citySentiment;
	int32_t healthRateTarget;
	int32_t healthRate;
	int32_t numHospitalWorkers;
	int32_t populationMaxSupported;
	int32_t populationRoomInHouses;
	int32_t populationImmigrationAmountPerBatch;
	int32_t populationEmigrationAmountPerBatch;
	int32_t populationEmigrationQueueSize;
	int32_t populationImmigrationQueueSize;
	int32_t populationPeopleInTentsShacks;
	int32_t populationPeopleInVillasPalaces;
	int32_t populationLastTargetHouseAdd;
	int32_t populationLastTargetHouseRemove;
	int32_t populationImmigratedToday;
	int32_t populationEmigratedToday;
	int32_t populationRefusedImmigrantsNoRoom;
	int32_t populationMigrationPercentage;
	int32_t populationNewcomersThisMonth;
	int16_t resourceLastTargetWarehouse;
	uint8_t entryPointX;
	uint8_t entryPointY;
	int16_t entryPointGridOffset;
	uint8_t exitPointX;
	uint8_t exitPointY;
	int16_t exitPointGridOffset;
	int16_t resourceTradeExportOver[16];
	int16_t resourceIndustryMothballed[16];
	int32_t resourceGranaryFoodStored[7];
	int32_t foodInfoFoodStoredInGranaries;
	int32_t foodInfoFoodTypesAvailable;
	int32_t foodInfoFoodTypesEaten;
	int32_t foodInfoFoodSupplyMonths;
	int32_t foodInfoGranariesOperating;
	int32_t populationPercentagePlebs;
	int32_t populationWorkingAge;
	int32_t workersAvailable;
	struct {
		int32_t workersNeeded;
		int32_t workersAllocated;
		int32_t totalHousesCovered;
		int32_t buildings;
		int32_t priority;
	} laborCategory[10];
	int32_t workersEmployed;
	int32_t workersUnemployed;
	int32_t unemploymentPercentage;
	int32_t unemploymentPercentageForSenate;
	int32_t workersNeeded;
	int32_t wages;
	int32_t wagesRome;
	int32_t salaryAmount;
	int32_t salaryRank;
	int32_t tradeNextImportResourceCaravan;
	int32_t tradeNextImportResourceCaravanBackup;
	int32_t housesRequiringFountainToEvolve;//4268
	int32_t housesRequiringWellToEvolve;//426c
	int32_t housesRequiringMoreEntertainmentToEvolve;//4270
	int32_t housesRequiringMoreEducationToEvolve;//4274
	int32_t housesRequiringEducationToEvolve;//4278
	int32_t housesRequiringSchool;//427c
	int32_t housesRequiringLibrary;//4280
	int32_t housesRequiringBarberToEvolve;
	int32_t housesRequiringBathhouseToEvolve;
	int32_t housesRequiringFoodToEvolve;
	int32_t housesRequiringClinicToEvolve;
	int32_t housesRequiringHospitalToEvolve;
	int32_t housesRequiringBarber;
	int32_t housesRequiringBathhouse;
	int32_t housesRequiringClinic;
	int32_t housesRequiringReligionToEvolve;
	int32_t housesRequiringMoreReligionToEvolve;
	int32_t housesRequiringEvenMoreReligionToEvolve;
	int32_t housesRequiringReligion;
	int32_t entertainmentTheaterShows;
	int32_t entertainmentTheaterNoShowsWeighted;
	int32_t entertainmentAmphitheaterShows;
	int32_t entertainmentAmphitheaterNoShowsWeighted;
	int32_t entertainmentColosseumShows;
	int32_t entertainmentColosseumNoShowsWeighted;
	int32_t entertainmentHippodromeShows;
	int32_t entertainmentHippodromeNoShowsWeighted;
	int32_t entertainmentNeedingShowsMost;
	int32_t citywideAverageEntertainment;
	int32_t housesRequiringEntertainmentToEvolve;
	int32_t monthsSinceFestival;
	int8_t godWrathBolts[5];
	int32_t godMonthsSinceFestival[5];
	int32_t godLeastHappy;
	int32_t populationEmigrationCauseTextId;
	int32_t numProtestersThisMonth;
	int32_t numCriminalsThisMonth; // muggers+rioters
	int32_t healthDemand;
	int32_t religionDemand;
	int32_t educationDemand;
	int32_t entertainmentDemand;
	int32_t numRiotersInCity;
	int32_t ratingAdvisorSelection;
	int32_t ratingAdvisorExplanationCulture;
	int32_t ratingAdvisorExplanationProsperity;
	int32_t ratingAdvisorExplanationPeace;
	int32_t ratingAdvisorExplanationFavor;
	int32_t playerRank;
	int32_t personalSavings;
	int32_t donateAmount;
	int16_t workingDockBuildingIds[10];
	int16_t numAnimalsInCity;
	int16_t tradeNumOpenSeaRoutes;
	int16_t tradeNumOpenLandRoutes;
	int16_t tradeSeaProblemDuration;
	int16_t tradeLandProblemDuration;
	int16_t numWorkingDocks;
	int16_t numWorkingWharfs;
	int32_t tradeNextImportResourceDocker;
	int32_t tradeNextExportResourceDocker;
	int32_t debtState;
	int32_t monthsInDebt;
	int32_t cheatedMoney;
	int32_t populationLostTroopRequest;
	int32_t victoryHasWonScenario;
	int32_t victoryContinueMonths;
	int32_t victoryContinueMonthsChosen;
	int32_t wageRatePaidThisYear;
	int32_t tributeNotPaidLastYear;
	int32_t tributeNotPaidTotalYears;
	int32_t festivalGod;
	int32_t festivalSize;
	int32_t plannedFestivalSize;
	int32_t plannedFestivalMonthsToGo;
	int32_t plannedFestivalGod;
	int32_t festivalCostSmall;
	int32_t festivalCostLarge;
	int32_t festivalCostGrand;
	int32_t festivalWineGrand;
	int32_t festivalNotEnoughWine;
	int32_t citywideAverageReligion;
	int32_t citywideAverageEducation;
	int32_t citywideAverageHealth;
	int32_t cultureCoverageReligion;
	int32_t festivalEffectMonthsDelayFirst;
	int32_t festivalEffectMonthsDelaySecond;
	int32_t populationSentimentUnemployment;
	int32_t citySentimentLastTime;
	int32_t citySentimentChangeMessageDelay;
	int32_t populationEmigrationCause; // 4464
	int32_t riotersOrAttackingNativesInCity;
	int32_t nativeAttackDuration;
	int32_t nativeMissionPostOperational;
	int32_t nativeMainMeetingCenterX;
	int32_t nativeMainMeetingCenterY;
	int32_t wageRatePaidLastYear;
	int32_t foodInfoFoodNeededPerMonth; //44d0
	int32_t foodInfoGranariesUnderstaffed;
	int32_t foodInfoGranariesNotOperating;
	int32_t foodInfoGranariesNotOperatingWithFood;
	int32_t godCurseVenusActive;
	int32_t godBlessingNeptuneDoubleTrade;
	int32_t godBlessingMarsEnemiesToKill;
	int32_t godAngryMessageDelay;
	int32_t foodInfoFoodConsumedLastMonth;
	int32_t foodInfoFoodStoredLastMonth;
	int32_t foodInfoFoodStoredSoFarThisMonth;
	int32_t estimatedTaxIncome;
	int32_t tutorial1SenateBuilt;
	int32_t shipyardBoatsRequested;
	int32_t numEnemiesInCity;
	int32_t populationSentimentWages;
	int32_t populationPeopleInTents;
	int32_t populationPeopleInLargeInsulaAndAbove;
	int32_t numImperialSoldiersInCity;
	int32_t caesarInvasionDurationDayCountdown;
	int32_t caesarInvasionWarningsGiven;
	int32_t caesarInvasionDaysUntilInvasion;
	int32_t caesarInvasionRetreatMessageShown;
	uint8_t distantBattleCityId;
	uint8_t distantBattleEnemyStrength;
	uint8_t distantBattleRomanStrength;
	int8_t distantBattleMonthsToBattle;
	int8_t distantBattleRomanMonthsToReturn;
	int8_t distantBattleRomanMonthsToTravel;
	int8_t distantBattleCityMonthsUntilRoman;
	int8_t triumphalArchesAvailable;
	int8_t distantBattleTotalCount;
	int8_t distantBattleWonCount;
	int8_t distantBattleEnemyMonthsTraveled;
	int8_t distantBattleRomanMonthsTraveled;
	int8_t militaryTotalLegions;
	int8_t militaryTotalLegionsEmpireService;
	int8_t militaryTotalSoldiers;
	int8_t triumphalArchesPlaced;
	int32_t numSoldiersInCity;
	int8_t populationSentimentIncludeTents;
	int32_t caesarInvasionCount;
	int32_t caesarInvasionSize;
	int32_t caesarInvasionSoldiersDied;
	int32_t militaryLegionaryLegions;
	int32_t populationHighestEver;
	int32_t estimatedYearlyWages;
	int32_t resourceWineTypesAvailable;
	struct {
		int32_t id;
		int32_t size;
	} largestRoadNetworks[10];
	int32_t housesRequiringSecondWineToEvolve;
	int32_t godCurseNeptuneSankShips;
	int32_t entertainmentHippodromeHasShow;
	int32_t messageShownHippodrome;
	int32_t messageShownColosseum;
	int32_t messageShownEmigration;
	int32_t messageShownFired;
	int32_t messageShownVictory;
	int32_t missionSavedGameWritten;
	int32_t tutorial1FireMessageShown;
	int32_t tutorial3DiseaseMessageShown;
	int32_t numAttackingNativesInCity;
} Data_CityInfo;

extern struct _Data_CityInfo_Extra {
	int32_t populationGraphOrder;
	struct {
		int32_t x;
		int32_t y;
		int32_t gridOffset;
	} entryPointFlag;
	struct {
		int32_t x;
		int32_t y;
		int32_t gridOffset;
	} exitPointFlag;
	int32_t ciid;
} Data_CityInfo_Extra;

#endif
