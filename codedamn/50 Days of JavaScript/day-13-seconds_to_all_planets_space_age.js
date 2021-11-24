const spaceAge = (seconds) => {
	const yearsInAllPlanets = {
		Mercury: 0,
		Venus: 0,
		Earth: 0,
		Mars: 0,
		Jupiter: 0,
		Saturn: 0,
		Uranus: 0,
		Neptune: 0,
	}

    let year = ((((seconds / 60) / 60) / 24) / 365.25);
    yearsInAllPlanets.Mercury = Math.round((year / 0.2408467) * 100) / 100;
    yearsInAllPlanets.Venus = Math.round((year / 0.61519726) * 100) / 100;
    yearsInAllPlanets.Earth = Math.round(year * 100) / 100;
    yearsInAllPlanets.Mars = Math.round((year / 1.8808158) * 100) / 100;
    yearsInAllPlanets.Jupiter = Math.round((year / 11.862615) * 100) / 100;
    yearsInAllPlanets.Saturn = Math.round((year / 29.447498) * 100) / 100;
    yearsInAllPlanets.Uranus = Math.round((year / 84.016846) * 100) / 100;
    yearsInAllPlanets.Neptune = Math.round((year / 164.79132) * 100) / 100;

	return yearsInAllPlanets
}

console.log(spaceAge(Math.round(Math.random() * 99999999)))